url = "http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/h2020/index.html#c,calls=level3/t/EU.1./1/1/1/default-group&level4/t/EU.1.1./0/1/1/default-group&level4/t/EU.1.2./0/1/1/default-group&level4/t/EU.1.3./0/1/1/default-group&level4/t/EU.1.4./0/1/1/default-group&level3/t/EU.2./1/1/1/default-group&level4/t/EU.2.1./0/1/1/default-group&level5/t/EU.2.1.1./0/1/1/default-group&level5/t/EU.2.1.2./0/1/1/default-group&level5/t/EU.2.1.3./0/1/1/default-group&level5/t/EU.2.1.4./0/1/1/default-group&level5/t/EU.2.1.5./0/1/1/default-group&level5/t/EU.2.1.6./0/1/1/default-group&level4/t/EU.2.2./0/1/1/default-group&level4/t/EU.2.3./0/1/1/default-group&level3/t/EU.3./1/1/1/default-group&level4/t/EU.3.1./0/1/1/default-group&level4/t/EU.3.2./0/1/1/default-group&level4/t/EU.3.3./0/1/1/default-group&level4/t/EU.3.4./0/1/1/default-group&level4/t/EU.3.5./0/1/1/default-group&level4/t/EU.3.6./0/1/1/default-group&level4/t/EU.3.7./0/1/1/default-group&level3/t/EU.4./1/1/1/default-group&level3/t/EU.5./1/1/1/default-group&level3/t/EU.7./1/1/1/default-group&level2/t/Euratom/1/1/1/default-group&hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDate/asc"  


from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from pyvirtualdisplay import Display

def correct_url(url): 
    if not url.startswith("http://") and not url.startswith("https://"):
        url = "http://" + url
    return url

def scrollDown(browser, numberOfScrollDowns):
    body = browser.find_element_by_tag_name("body")
    while numberOfScrollDowns >=0:
        body.send_keys(Keys.PAGE_DOWN)
        numberOfScrollDowns -= 1
        return browser

def crawl_url(url, run_headless=True):
    if run_headless:
        display = Display(visible=0, size=(1024, 768))
        display.start()
    url = correct_url(url)
    browser = webdriver.Firefox()
    browser.get(url)
    browser = scrollDown(browser, 10)
    all_hover_elements = browser.find_elements_by_class_name("hover-box")
    for hover_element in all_hover_elements:
        a_element = hover_element.find_element_by_tag_name("a")
        product_title = a_element.get_attribute("title")
        product_link = a_element.get_attribute("href")
        print product_title, product_link
    browser.quit()

if __name__=='__main__':
    url = "http://www.jabong.com/men/shoes/new-products/"
    crawl_url(url)

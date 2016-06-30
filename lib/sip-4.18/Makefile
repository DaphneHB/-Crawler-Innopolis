
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/home/innopolis/Documents/crawler/lib/python2.7/site-packages || mkdir -p $(DESTDIR)/home/innopolis/Documents/crawler/lib/python2.7/site-packages
	cp -f sipconfig.py $(DESTDIR)/home/innopolis/Documents/crawler/lib/python2.7/site-packages/sipconfig.py
	cp -f /home/innopolis/Documents/crawler/lib/sip-4.18/sipdistutils.py $(DESTDIR)/home/innopolis/Documents/crawler/lib/python2.7/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)

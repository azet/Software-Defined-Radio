EXES=multimode.py multimode_helper.py
THESTUFF=$(EXES) multimode.grc Makefile

install:
	-mkdir -p $(HOME)/bin
	cp $(EXES) $(HOME)/bin
	@echo Please make sure your PYTHONPATH includes $(HOME)/bin
	@echo And also that PATH includes $(HOME)/bin
	@echo this will allow multimode to work correctly

tarball:
	tar czvf multimode-$(VERSION).tar.gz $(THESTUFF)
	
	

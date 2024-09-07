Name: libevent
Version: 2.1.12
Release: 1%{?dist}
Summary: The libevent API provides a mechanism to execute a callback function when a specific event occurs on a file descriptor

License: BSD
Group: Development/Libraries
URL: https://libevent.org/
Source0: %{name}-%{version}-stable.tar.gz

BuildRequires: gcc, make, autoconf, automake, libtool, python3

%description
The libevent API provides a mechanism to execute a callback function when a specific event occurs on a file descriptor.

%prep
%setup -q -n %{name}-%{version}-stable

%build
./configure --prefix=%{_prefix}/libevent/%{version}
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

# Fix ambiguous python shebang
sed -i '1s|^#!/usr/bin/env python|#!/usr/bin/env python3|' $RPM_BUILD_ROOT%{_prefix}/libevent/%{version}/bin/event_rpcgen.py

# Fix permissions for .la files
chmod -x $RPM_BUILD_ROOT%{_prefix}/libevent/%{version}/lib/*.la

%files
%{_prefix}/libevent/%{version}

%changelog
* Sun Aug 25 2024 Your Name <your.email@example.com> - 2.1.12-1
- Initial RPM release


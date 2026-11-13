<!DOCTYPE html>
<html lang="id" class="scroll-smooth">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Yayasan Alhadi Karanggan | Pendidikan Islam Modern & Berkarakter</title>
    <meta name="description" content="Website Resmi Yayasan Alhadi Karanggan, Gunung Putri, Kab. Bogor. Dipimpin oleh Kepala Sekolah Hadi Latifudin, S.Pd.">
    
    <!-- Google Fonts: Plus Jakarta Sans & Amiri (untuk sentuhan kaligrafi/islami) -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Amiri:wght@400;700&family=Plus+Jakarta+Sans:wght@400;500;600;700;800&display=swap" rel="stylesheet">
    
    <!-- Font Awesome Icons -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.1/css/all.min.css">
    
    <!-- Tailwind CSS -->
    <script src="https://cdn.tailwindcss.com"></script>
    <script>
        tailwind.config = {
            theme: {
                extend: {
                    fontFamily: {
                        sans: ['"Plus Jakarta Sans"', 'sans-serif'],
                        arabic: ['"Amiri"', 'serif'],
                    },
                    colors: {
                        emerald: {
                            50: '#ecfdf5',
                            100: '#d1fae5',
                            200: '#a7f3d0',
                            600: '#059669',
                            700: '#047857',
                            800: '#065f46',
                            900: '#064e3b',
                            950: '#022c22',
                        },
                        gold: {
                            50: '#fffbeb',
                            100: '#fef3c7',
                            300: '#fcd34d',
                            400: '#fbbf24',
                            500: '#f59e0b',
                            600: '#d97706',
                        }
                    }
                }
            }
        }
    </script>

    <style>
        /* Pola Geometri Islami Halus untuk Latar Belakang */
        .islamic-pattern {
            background-color: #064e3b;
            background-image: radial-gradient(#059669 1px, transparent 1px), radial-gradient(#d97706 0.5px, #064e3b 0.5px);
            background-size: 32px 32px;
            background-position: 0 0, 16px 16px;
        }
        
        .fade-up {
            opacity: 0;
            transform: translateY(24px);
            transition: opacity 0.7s ease-out, transform 0.7s ease-out;
        }
        
        .fade-up.visible {
            opacity: 1;
            transform: translateY(0);
        }
    </style>
</head>
<body class="bg-slate-50 text-slate-800 font-sans antialiased selection:bg-emerald-700 selection:text-white overflow-x-hidden">

    <!-- Top Bar Informasi Singkat -->
    <div class="bg-emerald-950 text-emerald-100 text-xs py-2 border-b border-emerald-800/60 hidden md:block">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 flex justify-between items-center">
            <div class="flex items-center space-x-6">
                <span class="flex items-center gap-2">
                    <i class="fa-solid fa-location-dot text-gold-400"></i>
                    Karanggan Muda RT 003 RW 004, Desa Karanggan, Kec. Gunung Putri, Kab. Bogor
                </span>
                <span class="flex items-center gap-2">
                    <i class="fa-solid fa-clock text-gold-400"></i>
                    Senin - Sabtu: 07.00 - 15.30 WIB
                </span>
            </div>
            <div class="flex items-center space-x-4">
                <a href="#ppdb" class="text-gold-400 hover:text-gold-300 font-semibold transition">Info PPDB Tahun Ajaran Baru</a>
            </div>
        </div>
    </div>

    <!-- 1. Header / Navigasi Responsif -->
    <header id="navbar" class="sticky top-0 z-50 bg-white/95 backdrop-blur-md shadow-sm border-b border-slate-100 transition-all duration-300">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="flex justify-between items-center h-20">
                <!-- Logo Yayasan -->
                <a href="#beranda" class="flex items-center gap-3 group">
                    <div class="w-11 h-11 rounded-xl bg-gradient-to-br from-emerald-700 to-emerald-900 flex items-center justify-center text-white shadow-md group-hover:scale-105 transition-transform border border-gold-400/40">
                        <svg class="w-7 h-7 text-gold-400" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="1.8">
                            <path stroke-linecap="round" stroke-linejoin="round" d="M12 6.253v13m0-13C10.832 5.477 9.246 5 7.5 5S4.168 5.477 3 6.253v13C4.168 18.477 5.754 18 7.5 18s3.332.477 4.5 1.253m0-13C13.168 5.477 14.754 5 16.5 5c1.747 0 3.332.477 4.5 1.253v13C19.832 18.477 18.247 18 16.5 18c-1.746 0-3.332.477-4.5 1.253" />
                        </svg>
                    </div>
                    <div>
                        <span class="block text-lg sm:text-xl font-extrabold text-emerald-900 tracking-tight leading-none">YAYASAN ALHADI</span>
                        <span class="block text-xs font-semibold text-gold-600 tracking-widest uppercase mt-1">Karanggan • Gunung Putri</span>
                    </div>
                </a>

                <!-- Menu Desktop -->
                <nav class="hidden lg:flex items-center space-x-7 text-sm font-semibold text-slate-600">
                    <a href="#beranda" class="hover:text-emerald-700 transition py-2">Beranda</a>
                    <a href="#sambutan" class="hover:text-emerald-700 transition py-2">Kepala Sekolah</a>
                    <a href="#profil" class="hover:text-emerald-700 transition py-2">Profil & Visi</a>
                    <a href="#program" class="hover:text-emerald-700 transition py-2">Program Pendidikan</a>
                    <a href="#fasilitas" class="hover:text-emerald-700 transition py-2">Fasilitas</a>
                    <a href="#galeri" class="hover:text-emerald-700 transition py-2">Galeri</a>
                    <a href="#kontak" class="hover:text-emerald-700 transition py-2">Kontak</a>
                </nav>

                <!-- CTA & Mobile Toggle -->
                <div class="flex items-center gap-3">
                    <a href="#ppdb" class="hidden sm:inline-flex items-center gap-2 bg-gradient-to-r from-emerald-700 to-emerald-800 hover:from-emerald-800 hover:to-emerald-900 text-white text-sm font-bold px-5 py-2.5 rounded-xl shadow-md hover:shadow-lg transition-all">
                        <i class="fa-solid fa-user-plus text-gold-400"></i>
                        <span>Daftar Sekarang</span>
                    </a>
                    <button id="mobile-menu-btn" aria-label="Buka Menu" class="lg:hidden p-2.5 rounded-xl text-slate-700 hover:bg-emerald-50 hover:text-emerald-800 focus:outline-none transition">
                        <i class="fa-solid fa-bars text-xl"></i>
                    </button>
                </div>
            </div>
        </div>

        <!-- Menu Mobile Dropdown -->
        <div id="mobile-menu" class="hidden lg:hidden bg-white border-t border-slate-100 px-4 pt-3 pb-6 space-y-2 shadow-xl">
            <a href="#beranda" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Beranda</a>
            <a href="#sambutan" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Sambutan Kepala Sekolah</a>
            <a href="#profil" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Profil & Visi Misi</a>
            <a href="#program" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Program Pendidikan</a>
            <a href="#fasilitas" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Fasilitas Sekolah</a>
            <a href="#galeri" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Galeri Kegiatan</a>
            <a href="#kontak" class="mobile-link block px-4 py-2.5 rounded-xl text-slate-700 font-semibold hover:bg-emerald-50 hover:text-emerald-800">Kontak & Lokasi</a>
            <div class="pt-2">
                <a href="#ppdb" class="mobile-link flex items-center justify-center gap-2 w-full bg-emerald-700 text-white font-bold py-3 rounded-xl shadow">
                    <i class="fa-solid fa-pen-to-square text-gold-400"></i>
                    Daftar PPDB Online
                </a>
            </div>
        </div>
    </header>

    <!-- 2. Hero Section -->
    <section id="beranda" class="relative islamic-pattern text-white overflow-hidden">
        <!-- Dekorasi Cahaya -->
        <div class="absolute -top-24 -right-24 w-96 h-96 bg-emerald-500/20 rounded-full blur-3xl pointer-events-none"></div>
        <div class="absolute bottom-0 left-0 w-80 h-80 bg-gold-500/10 rounded-full blur-3xl pointer-events-none"></div>

        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-16 md:py-24 lg:py-28 relative z-10">
            <div class="grid grid-cols-1 lg:grid-cols-12 gap-12 items-center">
                <div class="lg:col-span-7 space-y-6 text-center lg:text-left">
                    <div class="inline-flex items-center gap-2 px-4 py-1.5 rounded-full bg-emerald-800/80 border border-gold-400/40 text-gold-300 text-xs sm:text-sm font-semibold">
                        <i class="fa-solid fa-star-and-crescent"></i>
                        <span>Penerimaan Peserta Didik Baru (PPDB) Telah Dibuka</span>
                    </div>

                    <p class="font-arabic text-2xl sm:text-3xl text-gold-400">بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم</p>

                    <h1 class="text-3xl sm:text-4xl md:text-5xl lg:text-6xl font-extrabold leading-tight tracking-tight">
                        Membangun Generasi <span class="text-gold-400">Cerdas, Berkarakter</span> & Berakhlak Mulia
                    </h1>

                    <p class="text-emerald-100/90 text-base sm:text-lg max-w-2xl mx-auto lg:mx-0 leading-relaxed">
                        Selamat datang di <strong>Yayasan Alhadi Karanggan</strong>. Lembaga pendidikan terpadu di Karanggan Muda, Gunung Putri, Kabupaten Bogor yang memadukan kurikulum nasional unggul dengan nilai-nilai keislaman dan pembinaan karakter.
                    </p>

                    <div class="flex flex-col sm:flex-row items-center justify-center lg:justify-start gap-4 pt-2">
                        <a href="#ppdb" class="w-full sm:w-auto inline-flex items-center justify-center gap-2 bg-gold-500 hover:bg-gold-400 text-emerald-950 font-extrabold px-7 py-4 rounded-xl shadow-lg hover:shadow-gold-500/25 transition-all text-base">
                            <span>Pendaftaran Siswa Baru</span>
                            <i class="fa-solid fa-arrow-right"></i>
                        </a>
                        <a href="#profil" class="w-full sm:w-auto inline-flex items-center justify-center gap-2 bg-white/10 hover:bg-white/20 backdrop-blur-sm border border-white/25 text-white font-semibold px-7 py-4 rounded-xl transition-all text-base">
                            <i class="fa-solid fa-school text-gold-400"></i>
                            <span>Profil Sekolah</span>
                        </a>
                    </div>

                    <!-- Statistik Singkat -->
                    <div class="grid grid-cols-3 gap-4 pt-6 border-t border-emerald-700/60 max-w-lg mx-auto lg:mx-0">
                        <div>
                            <div class="text-2xl sm:text-3xl font-extrabold text-gold-400">100%</div>
                            <div class="text-xs sm:text-sm text-emerald-200">Pendidikan Karakter</div>
                        </div>
                        <div>
                            <div class="text-2xl sm:text-3xl font-extrabold text-gold-400">Beragam</div>
                            <div class="text-xs sm:text-sm text-emerald-200">Jenjang & Tahfidz</div>
                        </div>
                        <div>
                            <div class="text-2xl sm:text-3xl font-extrabold text-gold-400">Asri</div>
                            <div class="text-xs sm:text-sm text-emerald-200">Lingkungan Belajar</div>
                        </div>
                    </div>
                </div>

                <!-- Kartu Visual Ilustrasi Kampus/Pendidikan -->
                <div class="lg:col-span-5">
                    <div class="relative bg-white/10 backdrop-blur-md p-4 sm:p-6 rounded-3xl border border-white/20 shadow-2xl">
                        <div class="rounded-2xl overflow-hidden bg-emerald-900 aspect-[4/3] relative flex flex-col items-center justify-center p-6 text-center border border-emerald-700">
                            <img src="https://images.unsplash.com/photo-1577896851231-70ef18881754?auto=format&fit=crop&w=800&q=80" 
                                 alt="Kegiatan Belajar Yayasan Alhadi Karanggan" 
                                 onerror="this.src='https://placehold.co/800x600/065f46/fbbf24?text=Yayasan+Alhadi+Karanggan'"
                                 class="absolute inset-0 w-full h-full object-cover opacity-55">
                            <div class="absolute inset-0 bg-gradient-to-t from-emerald-950 via-emerald-950/40 to-transparent"></div>
                            <div class="relative z-10 mt-auto text-left w-full">
                                <span class="inline-block px-3 py-1 bg-gold-500 text-emerald-950 text-xs font-bold rounded-lg mb-2">
                                    Kabupaten Bogor
                                </span>
                                <h2 class="text-xl font-bold text-white">Yayasan Alhadi Karanggan</h2>
                                <p class="text-xs text-emerald-200 mt-1">Karanggan Muda RT 003 RW 004, Kec. Gunung Putri</p>
                            </div>
                        </div>

                        <!-- Badge Kepemimpinan -->
                        <div class="mt-4 bg-white text-slate-800 p-4 rounded-2xl shadow-lg flex items-center gap-4">
                            <div class="w-12 h-12 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 font-bold text-lg">
                                <i class="fa-solid fa-user-tie"></i>
                            </div>
                            <div>
                                <p class="text-xs font-semibold text-emerald-700 uppercase tracking-wider">Kepala Sekolah</p>
                                <p class="font-extrabold text-slate-900 text-base">Hadi Latifudin, S.Pd.</p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 3. Sambutan Kepala Sekolah -->
    <section id="sambutan" class="py-16 md:py-24 bg-white">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="bg-gradient-to-br from-emerald-50 via-white to-gold-50/40 rounded-3xl p-6 sm:p-10 lg:p-14 border border-emerald-100 shadow-sm fade-up">
                <div class="grid grid-cols-1 lg:grid-cols-12 gap-10 items-center">
                    <!-- Avatar / Foto Resmi Kepala Sekolah -->
                    <div class="lg:col-span-4 flex flex-col items-center text-center">
                        <div class="relative w-56 h-56 sm:w-64 sm:h-64 rounded-3xl overflow-hidden shadow-xl border-4 border-white bg-gradient-to-b from-emerald-700 to-emerald-900 flex items-center justify-center">
                            <!-- Ilustrasi SVG Profesional Kepala Sekolah -->
                            <svg class="w-48 h-48 text-emerald-100" viewBox="0 0 200 200" fill="none" xmlns="http://www.w3.org/2000/svg">
                                <circle cx="100" cy="100" r="95" fill="#065F46"/>
                                <!-- Peci Hitam Khas Pendidik Indonesia -->
                                <path d="M62 62C62 48 138 48 138 62V74H62V62Z" fill="#1E293B"/>
                                <!-- Wajah -->
                                <path d="M68 74H132V104C132 122 118 136 100 136C82 136 68 122 68 104V74Z" fill="#FDE68A"/>
                                <!-- Kacamata & Ekspresi Ramah -->
                                <rect x="75" y="88" width="20" height="12" rx="3" stroke="#1E293B" stroke-width="2.5"/>
                                <rect x="105" y="88" width="20" height="12" rx="3" stroke="#1E293B" stroke-width="2.5"/>
                                <line x1="95" y1="93" x2="105" y2="93" stroke="#1E293B" stroke-width="2.5"/>
                                <path d="M90 116C94 121 106 121 110 116" stroke="#92400E" stroke-width="3" stroke-linecap="round"/>
                                <!-- Jas & Kemeja Putih -->
                                <path d="M40 190C40 156 66 142 100 142C134 142 160 156 160 190H40Z" fill="#0F172A"/>
                                <path d="M84 142L100 175L116 142H84Z" fill="#FFFFFF"/>
                                <path d="M97 148L100 172L103 148H97Z" fill="#D97706"/>
                            </svg>
                        </div>
                        <div class="mt-5">
                            <span class="inline-block px-3.5 py-1 rounded-full bg-emerald-100 text-emerald-800 text-xs font-bold mb-1">
                                Kepala Sekolah
                            </span>
                            <h3 class="text-xl font-extrabold text-slate-900">Hadi Latifudin, S.Pd.</h3>
                            <p class="text-sm text-slate-500 font-medium">Yayasan Alhadi Karanggan</p>
                        </div>
                    </div>

                    <!-- Pesan Sambutan -->
                    <div class="lg:col-span-8 space-y-5">
                        <div class="inline-flex items-center gap-2 text-emerald-700 font-bold text-sm uppercase tracking-wider">
                            <span class="w-8 h-0.5 bg-gold-500"></span>
                            Sambutan Kepala Sekolah
                        </div>
                        <h2 class="text-2xl sm:text-3xl font-extrabold text-slate-900 leading-snug">
                            Mendidik dengan Hati, Membentuk Generasi Qur'ani dan Unggul dalam Prestasi
                        </h2>
                        <p class="text-emerald-800 font-semibold italic">
                            Assalamu’alaikum Warahmatullahi Wabarakatuh,
                        </p>
                        <div class="space-y-4 text-slate-600 leading-relaxed text-sm sm:text-base">
                            <p>
                                Puji syukur kita panjatkan ke hadirat Allah SWT atas segala limpahan rahmat dan karunia-Nya. Selamat datang di website resmi <strong>Yayasan Alhadi Karanggan</strong>. Kehadiran media informasi ini merupakan wujud komitmen kami untuk memberikan pelayanan pendidikan yang transparan, modern, dan mudah diakses oleh masyarakat luas, khususnya warga Desa Karanggan dan Kecamatan Gunung Putri, Kabupaten Bogor.
                            </p>
                            <p>
                                Di era perkembangan zaman yang begitu pesat, pendidikan tidak cukup hanya membekali peserta didik dengan kecerdasan intelektual semata, tetapi juga harus menanamkan fondasi iman, adab, akhlakul karimah, serta keterampilan abad ke-21. Bersama jajaran dewan guru yang berdedikasi tinggi, kami bertekad menjadikan Yayasan Alhadi Karanggan sebagai rumah kedua yang nyaman, aman, dan inspiratif bagi putra-putri Bapak/Ibu untuk tumbuh menjadi generasi kebanggaan keluarga, agama, dan bangsa.
                            </p>
                        </div>
                        <p class="text-emerald-800 font-semibold italic">
                            Wassalamu’alaikum Warahmatullahi Wabarakatuh.
                        </p>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 4. Tentang Kami (Profil, Visi, Misi & Nilai Utama) -->
    <section id="profil" class="py-16 md:py-24 bg-slate-50 border-t border-slate-200/70">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="text-center max-w-3xl mx-auto mb-14 fade-up">
                <span class="text-emerald-700 font-bold text-sm uppercase tracking-wider">Tentang Yayasan</span>
                <h2 class="text-3xl sm:text-4xl font-extrabold text-slate-900 mt-2">Profil, Visi & Misi Pendidikan</h2>
                <p class="text-slate-600 mt-3 text-base">
                    Berdiri di tengah masyarakat Karanggan Muda RT 003 RW 004, Yayasan Alhadi Karanggan hadir sebagai mitra orang tua dalam mencetak generasi berilmu dan beradab.
                </p>
            </div>

            <div class="grid grid-cols-1 lg:grid-cols-2 gap-8 mb-12 fade-up">
                <!-- Kartu Visi -->
                <div class="bg-emerald-900 text-white rounded-3xl p-8 sm:p-10 shadow-lg relative overflow-hidden">
                    <div class="absolute right-0 bottom-0 opacity-10 text-9xl -mr-6 -mb-6">
                        <i class="fa-solid fa-mosque"></i>
                    </div>
                    <div class="w-14 h-14 rounded-2xl bg-gold-500 text-emerald-950 flex items-center justify-center text-2xl font-bold mb-6 shadow">
                        <i class="fa-solid fa-eye"></i>
                    </div>
                    <h3 class="text-2xl font-extrabold mb-4 text-gold-400">Visi Yayasan</h3>
                    <p class="text-emerald-50 text-lg leading-relaxed font-medium">
                        "Terwujudnya Lembaga Pendidikan Islam yang Unggul, Modern, dan Terpercaya dalam Membentuk Generasi Beriman, Berakhlak Mulia, Cerdas, Mandiri, serta Berwawasan Luas."
                    </p>
                </div>

                <!-- Kartu Misi -->
                <div class="bg-white rounded-3xl p-8 sm:p-10 shadow-sm border border-slate-200/80">
                    <div class="w-14 h-14 rounded-2xl bg-emerald-100 text-emerald-800 flex items-center justify-center text-2xl font-bold mb-6">
                        <i class="fa-solid fa-bullseye"></i>
                    </div>
                    <h3 class="text-2xl font-extrabold text-slate-900 mb-4">Misi Pendidikan</h3>
                    <ul class="space-y-3.5 text-slate-600 text-sm sm:text-base">
                        <li class="flex items-start gap-3">
                            <i class="fa-solid fa-circle-check text-emerald-600 mt-1 shrink-0"></i>
                            <span>Menyelenggarakan pembelajaran aktif, kreatif, dan menyenangkan berbasis nilai-nilai Al-Qur'an dan As-Sunnah.</span>
                        </li>
                        <li class="flex items-start gap-3">
                            <i class="fa-solid fa-circle-check text-emerald-600 mt-1 shrink-0"></i>
                            <span>Membiasakan budaya disiplin, sopan santun, kejujuran, dan kepedulian sosial dalam kehidupan sehari-hari.</span>
                        </li>
                        <li class="flex items-start gap-3">
                            <i class="fa-solid fa-circle-check text-emerald-600 mt-1 shrink-0"></i>
                            <span>Mengembangkan potensi akademik, literasi, numerasi, serta bakat dan minat siswa melalui pembinaan berkelanjutan.</span>
                        </li>
                        <li class="flex items-start gap-3">
                            <i class="fa-solid fa-circle-check text-emerald-600 mt-1 shrink-0"></i>
                            <span>Membangun sinergi harmonis antara sekolah, orang tua, dan masyarakat Desa Karanggan.</span>
                        </li>
                    </ul>
                </div>
            </div>

            <!-- 4 Nilai Utama -->
            <div class="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-4 gap-6 fade-up">
                <div class="bg-white p-6 rounded-2xl border border-slate-200/70 shadow-sm hover:border-emerald-400 transition">
                    <div class="w-11 h-11 rounded-xl bg-emerald-50 text-emerald-700 flex items-center justify-center text-lg mb-4">
                        <i class="fa-solid fa-heart"></i>
                    </div>
                    <h4 class="font-bold text-slate-900 text-lg">Berakhlakul Karimah</h4>
                    <p class="text-sm text-slate-600 mt-1.5">Menempatkan adab dan keteladanan di atas ilmu pengetahuan.</p>
                </div>
                <div class="bg-white p-6 rounded-2xl border border-slate-200/70 shadow-sm hover:border-emerald-400 transition">
                    <div class="w-11 h-11 rounded-xl bg-gold-50 text-gold-600 flex items-center justify-center text-lg mb-4">
                        <i class="fa-solid fa-book-quran"></i>
                    </div>
                    <h4 class="font-bold text-slate-900 text-lg">Cinta Al-Qur'an</h4>
                    <p class="text-sm text-slate-600 mt-1.5">Pembiasaan tadarus, tahsin, dan tahfidz juz pilihan setiap hari.</p>
                </div>
                <div class="bg-white p-6 rounded-2xl border border-slate-200/70 shadow-sm hover:border-emerald-400 transition">
                    <div class="w-11 h-11 rounded-xl bg-emerald-50 text-emerald-700 flex items-center justify-center text-lg mb-4">
                        <i class="fa-solid fa-graduation-cap"></i>
                    </div>
                    <h4 class="font-bold text-slate-900 text-lg">Unggul Akademik</h4>
                    <p class="text-sm text-slate-600 mt-1.5">Kurikulum terpadu yang mendorong daya pikir kritis dan inovatif.</p>
                </div>
                <div class="bg-white p-6 rounded-2xl border border-slate-200/70 shadow-sm hover:border-emerald-400 transition">
                    <div class="w-11 h-11 rounded-xl bg-gold-50 text-gold-600 flex items-center justify-center text-lg mb-4">
                        <i class="fa-solid fa-hands-holding-child"></i>
                    </div>
                    <h4 class="font-bold text-slate-900 text-lg">Ramah Anak</h4>
                    <p class="text-sm text-slate-600 mt-1.5">Lingkungan belajar aman, inklusif, dan menghargai setiap potensi anak.</p>
                </div>
            </div>
        </div>
    </section>

    <!-- 5. Jenjang / Program Pendidikan -->
    <section id="program" class="py-16 md:py-24 bg-white">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="text-center max-w-3xl mx-auto mb-12 fade-up">
                <span class="text-emerald-700 font-bold text-sm uppercase tracking-wider">Layanan Pendidikan</span>
                <h2 class="text-3xl sm:text-4xl font-extrabold text-slate-900 mt-2">Jenjang & Program Pendidikan</h2>
                <p class="text-slate-600 mt-3">
                    Pilih jenjang atau program pendidikan di Yayasan Alhadi Karanggan untuk melihat fokus kurikulum dan kegiatan unggulan.
                </p>
            </div>

            <!-- Filter Tab Interaktif -->
            <div class="flex flex-wrap justify-center gap-2 sm:gap-3 mb-10 fade-up" id="program-tabs">
                <button data-target="all" class="program-tab active px-5 py-2.5 rounded-xl text-sm font-bold bg-emerald-800 text-white shadow transition">Semua Program</button>
                <button data-target="paud" class="program-tab px-5 py-2.5 rounded-xl text-sm font-bold bg-slate-100 text-slate-700 hover:bg-emerald-50 transition">PAUD / RA / TK</button>
                <button data-target="dasar" class="program-tab px-5 py-2.5 rounded-xl text-sm font-bold bg-slate-100 text-slate-700 hover:bg-emerald-50 transition">SD / MI</button>
                <button data-target="menengah" class="program-tab px-5 py-2.5 rounded-xl text-sm font-bold bg-slate-100 text-slate-700 hover:bg-emerald-50 transition">SMP / MTs</button>
                <button data-target="tahfidz" class="program-tab px-5 py-2.5 rounded-xl text-sm font-bold bg-slate-100 text-slate-700 hover:bg-emerald-50 transition">Tahfidz & Ekskul</button>
            </div>

            <!-- Kartu Program -->
            <div class="grid grid-cols-1 md:grid-cols-2 gap-8 fade-up" id="program-grid">
                <!-- Card 1: PAUD / TK -->
                <div class="program-card bg-slate-50 rounded-3xl p-7 sm:p-8 border border-slate-200/80 hover:shadow-lg transition-all flex flex-col justify-between" data-category="paud">
                    <div>
                        <div class="flex items-center justify-between gap-4 mb-5">
                            <span class="px-3.5 py-1 rounded-full bg-gold-100 text-gold-700 text-xs font-extrabold uppercase">Usia Dini</span>
                            <i class="fa-solid fa-shapes text-2xl text-emerald-700"></i>
                        </div>
                        <h3 class="text-2xl font-extrabold text-slate-900">PAUD / TK Islam Alhadi</h3>
                        <p class="text-slate-600 text-sm sm:text-base mt-3 leading-relaxed">
                            Pendidikan anak usia dini berbasis bermain sambil belajar untuk menumbuhkan kecintaan kepada Allah, kemandirian, motorik halus/kasar, serta kesiapan memasuki sekolah dasar.
                        </p>
                        <div class="mt-5 pt-5 border-t border-slate-200 space-y-2 text-sm text-slate-700">
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pengenalan Huruf Hijaiyah & Doa Harian</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pembiasaan Adab Islami & Kemandirian</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Calistung Dasar Secara Menyenangkan</div>
                        </div>
                    </div>
                    <div class="mt-6 pt-4">
                        <a href="#ppdb" onclick="selectProgram('PAUD / TK Islam')" class="inline-flex items-center gap-2 text-emerald-800 font-bold text-sm hover:text-emerald-600">
                            <span>Daftar Jenjang PAUD/TK</span>
                            <i class="fa-solid fa-arrow-right"></i>
                        </a>
                    </div>
                </div>

                <!-- Card 2: SD / MI -->
                <div class="program-card bg-slate-50 rounded-3xl p-7 sm:p-8 border border-slate-200/80 hover:shadow-lg transition-all flex flex-col justify-between" data-category="dasar">
                    <div>
                        <div class="flex items-center justify-between gap-4 mb-5">
                            <span class="px-3.5 py-1 rounded-full bg-emerald-100 text-emerald-800 text-xs font-extrabold uppercase">Pendidikan Dasar</span>
                            <i class="fa-solid fa-book-open-reader text-2xl text-emerald-700"></i>
                        </div>
                        <h3 class="text-2xl font-extrabold text-slate-900">SD / MI Terpadu Alhadi</h3>
                        <p class="text-slate-600 text-sm sm:text-base mt-3 leading-relaxed">
                            Memadukan Kurikulum Nasional dengan penguatan pendidikan agama Islam, pembiasaan shalat berjamaah, literasi sains, serta pengembangan karakter positif sejak dini.
                        </p>
                        <div class="mt-5 pt-5 border-t border-slate-200 space-y-2 text-sm text-slate-700">
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Shalat Dhuha & Dzuhur Berjamaah</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Program Tahfidz Juz 30 & Praktik Ibadah</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Penguatan Matematika, Sains & Bahasa Inggris</div>
                        </div>
                    </div>
                    <div class="mt-6 pt-4">
                        <a href="#ppdb" onclick="selectProgram('SD / MI Terpadu')" class="inline-flex items-center gap-2 text-emerald-800 font-bold text-sm hover:text-emerald-600">
                            <span>Daftar Jenjang SD/MI</span>
                            <i class="fa-solid fa-arrow-right"></i>
                        </a>
                    </div>
                </div>

                <!-- Card 3: SMP / MTs -->
                <div class="program-card bg-slate-50 rounded-3xl p-7 sm:p-8 border border-slate-200/80 hover:shadow-lg transition-all flex flex-col justify-between" data-category="menengah">
                    <div>
                        <div class="flex items-center justify-between gap-4 mb-5">
                            <span class="px-3.5 py-1 rounded-full bg-emerald-100 text-emerald-800 text-xs font-extrabold uppercase">Pendidikan Menengah</span>
                            <i class="fa-solid fa-user-graduate text-2xl text-emerald-700"></i>
                        </div>
                        <h3 class="text-2xl font-extrabold text-slate-900">SMP / MTs Islam Alhadi</h3>
                        <p class="text-slate-600 text-sm sm:text-base mt-3 leading-relaxed">
                            Membentuk remaja muslim yang tangguh, berintegritas, melek teknologi informasi, serta siap berkompetisi di jenjang pendidikan selanjutnya dengan bekal iman dan ilmu.
                        </p>
                        <div class="mt-5 pt-5 border-t border-slate-200 space-y-2 text-sm text-slate-700">
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pembinaan Kepemimpinan & Organisasi Siswa</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Literasi Digital & Komputer Terapan</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pendalaman Fiqih, Akidah Akhlak & Bahasa Arab</div>
                        </div>
                    </div>
                    <div class="mt-6 pt-4">
                        <a href="#ppdb" onclick="selectProgram('SMP / MTs Islam')" class="inline-flex items-center gap-2 text-emerald-800 font-bold text-sm hover:text-emerald-600">
                            <span>Daftar Jenjang SMP/MTs</span>
                            <i class="fa-solid fa-arrow-right"></i>
                        </a>
                    </div>
                </div>

                <!-- Card 4: Tahfidz & Ekskul -->
                <div class="program-card bg-slate-50 rounded-3xl p-7 sm:p-8 border border-slate-200/80 hover:shadow-lg transition-all flex flex-col justify-between" data-category="tahfidz">
                    <div>
                        <div class="flex items-center justify-between gap-4 mb-5">
                            <span class="px-3.5 py-1 rounded-full bg-gold-100 text-gold-700 text-xs font-extrabold uppercase">Program Unggulan</span>
                            <i class="fa-solid fa-award text-2xl text-emerald-700"></i>
                        </div>
                        <h3 class="text-2xl font-extrabold text-slate-900">Tahfidz Al-Qur'an & Ekstrakurikuler</h3>
                        <p class="text-slate-600 text-sm sm:text-base mt-3 leading-relaxed">
                            Wadah pengembangan potensi non-akademik dan spiritual siswa untuk mengasah kepercayaan diri, kerja sama tim, kreativitas, dan kedekatan dengan Al-Qur'an.
                        </p>
                        <div class="mt-5 pt-5 border-t border-slate-200 space-y-2 text-sm text-slate-700">
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Kelas Tahsin & Tahfidz Al-Qur'an Bersanad</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pramuka, Pencak Silat, Futsal & Marawis/Hadroh</div>
                            <div class="flex items-center gap-2"><i class="fa-solid fa-check text-emerald-600"></i> Pidato 3 Bahasa (Indonesia, Arab, Inggris) & Kaligrafi</div>
                        </div>
                    </div>
                    <div class="mt-6 pt-4">
                        <a href="#ppdb" onclick="selectProgram('Program Tahfidz / Diniyah')" class="inline-flex items-center gap-2 text-emerald-800 font-bold text-sm hover:text-emerald-600">
                            <span>Daftar Program Unggulan</span>
                            <i class="fa-solid fa-arrow-right"></i>
                        </a>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 6. Fasilitas & Keunggulan Sekolah -->
    <section id="fasilitas" class="py-16 md:py-24 bg-emerald-950 text-white">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="text-center max-w-3xl mx-auto mb-14 fade-up">
                <span class="text-gold-400 font-bold text-sm uppercase tracking-wider">Sarana & Prasarana</span>
                <h2 class="text-3xl sm:text-4xl font-extrabold mt-2">Fasilitas Penunjang Pembelajaran</h2>
                <p class="text-emerald-200/80 mt-3">
                    Kami terus meningkatkan kualitas sarana dan prasarana agar proses belajar mengajar berlangsung kondusif, aman, dan menyenangkan.
                </p>
            </div>

            <div class="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-3 gap-6 fade-up">
                <!-- Fasilitas 1 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-chalkboard-user"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Ruang Kelas Nyaman</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Ruang belajar bersih, sirkulasi udara baik, pencahayaan optimal, dan dilengkapi media pembelajaran interaktif.
                    </p>
                </div>

                <!-- Fasilitas 2 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-mosque"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Masjid / Musholla Sekolah</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Pusat kegiatan ibadah shalat berjamaah, pembinaan akhlak, kajian keislaman, dan setoran hafalan Al-Qur'an siswa.
                    </p>
                </div>

                <!-- Fasilitas 3 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-book"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Perpustakaan & Pojok Baca</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Koleksi buku pelajaran, ensiklopedia Islam, kisah teladan nabi, dan buku bacaan untuk menumbuhkan budaya literasi.
                    </p>
                </div>

                <!-- Fasilitas 4 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-futbol"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Lapangan Olahraga & Upacara</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Area terbuka yang memadai untuk kegiatan upacara bendera, olahraga, pramuka, dan senam kebugaran bersama.
                    </p>
                </div>

                <!-- Fasilitas 5 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-computer"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Laboratorium Komputer</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Fasilitas pengenalan teknologi informasi dan komunikasi (TIK) guna membekali siswa kecakapan digital sejak dini.
                    </p>
                </div>

                <!-- Fasilitas 6 -->
                <div class="bg-emerald-900/60 border border-emerald-800 p-7 rounded-2xl hover:border-gold-400/60 transition">
                    <div class="w-12 h-12 rounded-xl bg-gold-500/20 text-gold-400 flex items-center justify-center text-xl mb-4">
                        <i class="fa-solid fa-tree"></i>
                    </div>
                    <h3 class="text-xl font-bold mb-2">Lingkungan Asri & Aman</h3>
                    <p class="text-emerald-100/80 text-sm leading-relaxed">
                        Berlokasi di lingkungan masyarakat Karanggan Muda yang kondusif, bersih, tertib, dan ramah bagi tumbuh kembang anak.
                    </p>
                </div>
            </div>
        </div>
    </section>

    <!-- Galeri Kegiatan Singkat -->
    <section id="galeri" class="py-16 md:py-20 bg-white">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="flex flex-col md:flex-row md:items-end justify-between mb-10 gap-4 fade-up">
                <div>
                    <span class="text-emerald-700 font-bold text-sm uppercase tracking-wider">Dokumentasi</span>
                    <h2 class="text-3xl font-extrabold text-slate-900 mt-1">Galeri Kegiatan Siswa</h2>
                </div>
                <p class="text-slate-600 text-sm max-w-md">
                    Potret semangat belajar, pembinaan karakter Islami, dan kebersamaan keluarga besar Yayasan Alhadi Karanggan.
                </p>
            </div>

            <div class="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-4 gap-5 fade-up">
                <div class="group relative rounded-2xl overflow-hidden aspect-[4/3] bg-emerald-100 shadow-sm">
                    <img src="https://images.unsplash.com/photo-1503676260728-1c00da094a0b?auto=format&fit=crop&w=600&q=80" 
                         alt="Pembelajaran Interaktif di Kelas" 
                         onerror="this.src='https://placehold.co/600x450/047857/ffffff?text=Pembelajaran+Kelas'"
                         class="w-full h-full object-cover group-hover:scale-105 transition duration-500">
                    <div class="absolute inset-0 bg-gradient-to-t from-slate-950/80 via-transparent to-transparent flex items-end p-4">
                        <span class="text-white font-bold text-sm">Pembelajaran Aktif di Kelas</span>
                    </div>
                </div>
                <div class="group relative rounded-2xl overflow-hidden aspect-[4/3] bg-emerald-100 shadow-sm">
                    <img src="https://images.unsplash.com/photo-1585036156171-384164a8c675?auto=format&fit=crop&w=600&q=80" 
                         alt="Program Tahfidz Al-Quran" 
                         onerror="this.src='https://placehold.co/600x450/065f46/fbbf24?text=Program+Tahfidz'"
                         class="w-full h-full object-cover group-hover:scale-105 transition duration-500">
                    <div class="absolute inset-0 bg-gradient-to-t from-slate-950/80 via-transparent to-transparent flex items-end p-4">
                        <span class="text-white font-bold text-sm">Bimbingan Tahsin & Tahfidz</span>
                    </div>
                </div>
                <div class="group relative rounded-2xl overflow-hidden aspect-[4/3] bg-emerald-100 shadow-sm">
                    <img src="https://images.unsplash.com/photo-1509062522246-3755977927d7?auto=format&fit=crop&w=600&q=80" 
                         alt="Bimbingan Guru Profesional" 
                         onerror="this.src='https://placehold.co/600x450/047857/ffffff?text=Bimbingan+Guru'"
                         class="w-full h-full object-cover group-hover:scale-105 transition duration-500">
                    <div class="absolute inset-0 bg-gradient-to-t from-slate-950/80 via-transparent to-transparent flex items-end p-4">
                        <span class="text-white font-bold text-sm">Pendampingan Literasi Siswa</span>
                    </div>
                </div>
                <div class="group relative rounded-2xl overflow-hidden aspect-[4/3] bg-emerald-100 shadow-sm">
                    <img src="https://images.unsplash.com/photo-1529390079861-591de354faf5?auto=format&fit=crop&w=600&q=80" 
                         alt="Kegiatan Ekstrakurikuler" 
                         onerror="this.src='https://placehold.co/600x450/065f46/fbbf24?text=Ekstrakurikuler'"
                         class="w-full h-full object-cover group-hover:scale-105 transition duration-500">
                    <div class="absolute inset-0 bg-gradient-to-t from-slate-950/80 via-transparent to-transparent flex items-end p-4">
                        <span class="text-white font-bold text-sm">Ekstrakurikuler & Kebersamaan</span>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 7. Formulir Pendaftaran Siswa Baru (PPDB) Interaktif -->
    <section id="ppdb" class="py-16 md:py-24 bg-gradient-to-b from-emerald-50 to-slate-50 border-t border-emerald-100">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="grid grid-cols-1 lg:grid-cols-12 gap-10 items-start">
                <!-- Informasi Alur PPDB -->
                <div class="lg:col-span-5 space-y-6 fade-up">
                    <span class="inline-block px-3.5 py-1 rounded-full bg-gold-100 text-gold-700 text-xs font-extrabold uppercase">
                        PPDB Online
                    </span>
                    <h2 class="text-3xl sm:text-4xl font-extrabold text-slate-900 leading-tight">
                        Pendaftaran Peserta Didik Baru
                    </h2>
                    <p class="text-slate-600 leading-relaxed">
                        Daftarkan putra-putri Anda di <strong>Yayasan Alhadi Karanggan</strong> secara mudah melalui formulir online di samping. Panitia PPDB kami akan segera menghubungi Bapak/Ibu untuk informasi jadwal observasi dan kelengkapan berkas.
                    </p>

                    <div class="bg-white p-6 rounded-2xl border border-emerald-100 shadow-sm space-y-4">
                        <h3 class="font-bold text-slate-900 flex items-center gap-2">
                            <i class="fa-solid fa-list-check text-emerald-700"></i>
                            Persyaratan Umum Pendaftaran
                        </h3>
                        <ul class="space-y-2.5 text-sm text-slate-600">
                            <li class="flex items-center gap-2.5">
                                <span class="w-5 h-5 rounded-full bg-emerald-100 text-emerald-800 text-xs font-bold flex items-center justify-center">1</span>
                                Mengisi formulir pendaftaran online / offline
                            </li>
                            <li class="flex items-center gap-2.5">
                                <span class="w-5 h-5 rounded-full bg-emerald-100 text-emerald-800 text-xs font-bold flex items-center justify-center">2</span>
                                Fotokopi Akta Kelahiran & Kartu Keluarga (KK)
                            </li>
                            <li class="flex items-center gap-2.5">
                                <span class="w-5 h-5 rounded-full bg-emerald-100 text-emerald-800 text-xs font-bold flex items-center justify-center">3</span>
                                Fotokopi KTP Orang Tua / Wali
                            </li>
                            <li class="flex items-center gap-2.5">
                                <span class="w-5 h-5 rounded-full bg-emerald-100 text-emerald-800 text-xs font-bold flex items-center justify-center">4</span>
                                Pas foto terbaru ukuran 3x4 (2 lembar)
                            </li>
                        </ul>
                    </div>
                </div>

                <!-- Form PPDB -->
                <div class="lg:col-span-7 fade-up">
                    <div class="bg-white rounded-3xl p-6 sm:p-10 shadow-xl border border-slate-100">
                        <form id="ppdb-form" class="space-y-5" novalidate>
                            <div class="grid grid-cols-1 sm:grid-cols-2 gap-5">
                                <div>
                                    <label for="namaSiswa" class="block text-sm font-bold text-slate-700 mb-1.5">Nama Lengkap Calon Siswa <span class="text-red-500">*</span></label>
                                    <input type="text" id="namaSiswa" name="namaSiswa" required placeholder="Contoh: Ahmad Fauzan"
                                           class="w-full px-4 py-3 rounded-xl border border-slate-300 focus:border-emerald-600 focus:ring-2 focus:ring-emerald-600/20 outline-none transition text-sm">
                                </div>
                                <div>
                                    <label for="jenjang" class="block text-sm font-bold text-slate-700 mb-1.5">Jenjang Pendidikan <span class="text-red-500">*</span></label>
                                    <select id="jenjang" name="jenjang" required
                                            class="w-full px-4 py-3 rounded-xl border border-slate-300 focus:border-emerald-600 focus:ring-2 focus:ring-emerald-600/20 outline-none transition text-sm bg-white">
                                        <option value="">-- Pilih Jenjang --</option>
                                        <option value="PAUD / TK Islam">PAUD / TK Islam</option>
                                        <option value="SD / MI Terpadu">SD / MI Terpadu</option>
                                        <option value="SMP / MTs Islam">SMP / MTs Islam</option>
                                        <option value="Program Tahfidz / Diniyah">Program Tahfidz / Diniyah</option>
                                    </select>
                                </div>
                            </div>

                            <div class="grid grid-cols-1 sm:grid-cols-2 gap-5">
                                <div>
                                    <label for="namaOrtu" class="block text-sm font-bold text-slate-700 mb-1.5">Nama Orang Tua / Wali <span class="text-red-500">*</span></label>
                                    <input type="text" id="namaOrtu" name="namaOrtu" required placeholder="Nama Ayah / Ibu / Wali"
                                           class="w-full px-4 py-3 rounded-xl border border-slate-300 focus:border-emerald-600 focus:ring-2 focus:ring-emerald-600/20 outline-none transition text-sm">
                                </div>
                                <div>
                                    <label for="noWa" class="block text-sm font-bold text-slate-700 mb-1.5">Nomor WhatsApp Aktif <span class="text-red-500">*</span></label>
                                    <input type="tel" id="noWa" name="noWa" required placeholder="Contoh: 081234567890"
                                           class="w-full px-4 py-3 rounded-xl border border-slate-300 focus:border-emerald-600 focus:ring-2 focus:ring-emerald-600/20 outline-none transition text-sm">
                                </div>
                            </div>

                            <div>
                                <label for="alamat" class="block text-sm font-bold text-slate-700 mb-1.5">Alamat Lengkap <span class="text-red-500">*</span></label>
                                <textarea id="alamat" name="alamat" rows="3" required placeholder="Contoh: Kp. Karanggan Muda RT 003 RW 004, Desa Karanggan, Kec. Gunung Putri"
                                          class="w-full px-4 py-3 rounded-xl border border-slate-300 focus:border-emerald-600 focus:ring-2 focus:ring-emerald-600/20 outline-none transition text-sm"></textarea>
                            </div>

                            <!-- Kotak Pesan Validasi Error -->
                            <div id="form-error" class="hidden p-4 rounded-xl bg-red-50 border border-red-200 text-red-700 text-sm font-medium flex items-center gap-2">
                                <i class="fa-solid fa-circle-exclamation"></i>
                                <span id="form-error-text">Mohon lengkapi semua kolom yang wajib diisi.</span>
                            </div>

                            <button type="submit" class="w-full bg-gradient-to-r from-emerald-700 to-emerald-800 hover:from-emerald-800 hover:to-emerald-900 text-white font-extrabold py-4 px-6 rounded-xl shadow-lg hover:shadow-xl transition-all flex items-center justify-center gap-2 text-base">
                                <i class="fa-solid fa-paper-plane text-gold-400"></i>
                                <span>Kirim Formulir Pendaftaran</span>
                            </button>
                        </form>

                        <!-- Notifikasi Konfirmasi Berhasil (Pengganti Alert) -->
                        <div id="ppdb-success" class="hidden mt-6 p-6 rounded-2xl bg-emerald-50 border border-emerald-200 text-emerald-950 space-y-4">
                            <div class="flex items-start gap-3">
                                <div class="w-10 h-10 rounded-full bg-emerald-600 text-white flex items-center justify-center shrink-0 text-lg">
                                    <i class="fa-solid fa-check"></i>
                                </div>
                                <div>
                                    <h4 class="font-extrabold text-lg text-emerald-900">Pendaftaran Berhasil Tercatat!</h4>
                                    <p class="text-sm text-emerald-800 mt-1" id="success-summary"></p>
                                </div>
                            </div>
                            <div class="flex flex-col sm:flex-row gap-3 pt-2">
                                <a id="wa-direct-btn" href="#" target="_blank" rel="noopener noreferrer"
                                   class="inline-flex items-center justify-center gap-2 bg-green-600 hover:bg-green-700 text-white font-bold px-5 py-3 rounded-xl text-sm shadow transition">
                                    <i class="fa-brands fa-whatsapp text-lg"></i>
                                    <span>Konfirmasi Langsung via WhatsApp Sekolah</span>
                                </a>
                                <button type="button" id="reset-ppdb-btn" class="px-5 py-3 rounded-xl border border-emerald-300 text-emerald-800 font-semibold text-sm hover:bg-emerald-100 transition">
                                    Daftarkan Siswa Lain
                                </button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 8. Informasi Kontak & Lokasi -->
    <section id="kontak" class="py-16 md:py-24 bg-white border-t border-slate-200/70">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="text-center max-w-3xl mx-auto mb-14 fade-up">
                <span class="text-emerald-700 font-bold text-sm uppercase tracking-wider">Hubungi Kami</span>
                <h2 class="text-3xl sm:text-4xl font-extrabold text-slate-900 mt-2">Lokasi & Informasi Kontak</h2>
                <p class="text-slate-600 mt-3">
                    Kunjungi langsung kampus Yayasan Alhadi Karanggan atau hubungi sekretariat kami untuk konsultasi pendidikan.
                </p>
            </div>

            <div class="grid grid-cols-1 lg:grid-cols-12 gap-8 items-stretch fade-up">
                <!-- Detail Kontak -->
                <div class="lg:col-span-5 bg-slate-50 p-7 sm:p-8 rounded-3xl border border-slate-200/80 flex flex-col justify-between space-y-6">
                    <div class="space-y-6">
                        <div class="flex items-start gap-4">
                            <div class="w-11 h-11 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 text-lg">
                                <i class="fa-solid fa-location-dot"></i>
                            </div>
                            <div>
                                <h3 class="font-bold text-slate-900">Alamat Lengkap</h3>
                                <p class="text-sm text-slate-600 mt-1 leading-relaxed">
                                    Karanggan Muda RT 003 RW 004, Desa Karanggan, Kecamatan Gunung Putri, Kabupaten Bogor, Jawa Barat 16960
                                </p>
                                <button type="button" onclick="copyAddress()" class="mt-2 inline-flex items-center gap-1.5 text-xs font-bold text-emerald-700 hover:text-emerald-900">
                                    <i class="fa-regular fa-copy"></i>
                                    <span id="copy-status">Salin Alamat</span>
                                </button>
                            </div>
                        </div>

                        <div class="flex items-start gap-4">
                            <div class="w-11 h-11 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 text-lg">
                                <i class="fa-solid fa-user-tie"></i>
                            </div>
                            <div>
                                <h3 class="font-bold text-slate-900">Pimpinan / Kepala Sekolah</h3>
                                <p class="text-sm text-slate-600 mt-1">Hadi Latifudin, S.Pd.</p>
                            </div>
                        </div>

                        <div class="flex items-start gap-4">
                            <div class="w-11 h-11 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 text-lg">
                                <i class="fa-brands fa-whatsapp"></i>
                            </div>
                            <div>
                                <h3 class="font-bold text-slate-900">Telepon & WhatsApp Sekretariat</h3>
                                <p class="text-sm text-slate-600 mt-1">+62 812-8000-1945 (Admin PPDB)</p>
                            </div>
                        </div>

                        <div class="flex items-start gap-4">
                            <div class="w-11 h-11 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 text-lg">
                                <i class="fa-solid fa-envelope"></i>
                            </div>
                            <div>
                                <h3 class="font-bold text-slate-900">Email Resmi</h3>
                                <p class="text-sm text-slate-600 mt-1">info@yayasanalhadikaranggan.sch.id</p>
                            </div>
                        </div>

                        <div class="flex items-start gap-4">
                            <div class="w-11 h-11 rounded-xl bg-emerald-100 text-emerald-800 flex items-center justify-center shrink-0 text-lg">
                                <i class="fa-solid fa-clock"></i>
                            </div>
                            <div>
                                <h3 class="font-bold text-slate-900">Jam Operasional</h3>
                                <p class="text-sm text-slate-600 mt-1">Senin – Jumat: 07.00 – 15.30 WIB<br>Sabtu: 07.30 – 13.00 WIB</p>
                            </div>
                        </div>
                    </div>
                </div>

                <!-- Peta Lokasi Interaktif Area Karanggan, Gunung Putri, Kab. Bogor -->
                <div class="lg:col-span-7 rounded-3xl overflow-hidden border border-slate-200 shadow-sm min-h-[380px] relative bg-emerald-50 flex flex-col">
                    <iframe 
                        title="Peta Lokasi Yayasan Alhadi Karanggan Gunung Putri Bogor"
                        src="https://www.openstreetmap.org/export/embed.html?bbox=106.8780%2C-6.4620%2C106.9050%2C-6.4420&amp;layer=mapnik&amp;marker=-6.4520%2C106.8915" 
                        class="w-full h-full min-h-[360px] border-0 flex-grow"
                        loading="lazy">
                    </iframe>
                    <div class="bg-emerald-900 text-white px-5 py-3.5 flex flex-wrap items-center justify-between gap-3 text-xs sm:text-sm">
                        <span class="flex items-center gap-2 font-medium">
                            <i class="fa-solid fa-map-pin text-gold-400"></i>
                            Titik Lokasi: Karanggan Muda RT 003 RW 004, Gunung Putri, Kab. Bogor
                        </span>
                        <a href="https://maps.google.com/?q=Karanggan+Muda+Desa+Karanggan+Gunung+Putri+Bogor" target="_blank" rel="noopener noreferrer"
                           class="inline-flex items-center gap-1.5 bg-gold-500 hover:bg-gold-400 text-emerald-950 font-bold px-3.5 py-1.5 rounded-lg transition">
                            <span>Buka di Google Maps</span>
                            <i class="fa-solid fa-arrow-up-right-from-square text-xs"></i>
                        </a>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- 9. Footer Lengkap -->
    <footer class="bg-emerald-950 text-emerald-100 border-t border-emerald-900">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-14">
            <div class="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-12 gap-10">
                <!-- Brand Yayasan -->
                <div class="lg:col-span-5 space-y-4">
                    <div class="flex items-center gap-3">
                        <div class="w-10 h-10 rounded-xl bg-emerald-800 border border-gold-400/40 flex items-center justify-center text-gold-400">
                            <i class="fa-solid fa-book-open text-lg"></i>
                        </div>
                        <div>
                            <span class="block text-lg font-extrabold text-white leading-none">YAYASAN ALHADI</span>
                            <span class="block text-xs text-gold-400 font-semibold tracking-wider mt-1">KARANGGAN • GUNUNG PUTRI</span>
                        </div>
                    </div>
                    <p class="text-sm text-emerald-200/80 leading-relaxed max-w-md">
                        Lembaga pendidikan Islam yang berkomitmen melahirkan generasi berilmu amaliah, beramal ilmiah, dan berakhlakul karimah di bawah kepemimpinan Kepala Sekolah Bapak Hadi Latifudin, S.Pd.
                    </p>
                </div>

                <!-- Tautan Cepat -->
                <div class="lg:col-span-3 space-y-3">
                    <h4 class="text-white font-bold text-base">Tautan Cepat</h4>
                    <ul class="space-y-2 text-sm text-emerald-200/80">
                        <li><a href="#beranda" class="hover:text-gold-400 transition">Beranda</a></li>
                        <li><a href="#sambutan" class="hover:text-gold-400 transition">Sambutan Kepala Sekolah</a></li>
                        <li><a href="#profil" class="hover:text-gold-400 transition">Visi & Misi Yayasan</a></li>
                        <li><a href="#program" class="hover:text-gold-400 transition">Program Pendidikan</a></li>
                        <li><a href="#ppdb" class="hover:text-gold-400 transition">Pendaftaran PPDB</a></li>
                    </ul>
                </div>

                <!-- Kontak Footer -->
                <div class="lg:col-span-4 space-y-3">
                    <h4 class="text-white font-bold text-base">Alamat & Sekretariat</h4>
                    <p class="text-sm text-emerald-200/80 leading-relaxed">
                        <i class="fa-solid fa-location-dot text-gold-400 mr-2"></i>
                        Karanggan Muda RT 003 RW 004, Desa Karanggan, Kec. Gunung Putri, Kab. Bogor, Jawa Barat.
                    </p>
                    <p class="text-sm text-emerald-200/80">
                        <i class="fa-solid fa-user-tie text-gold-400 mr-2"></i>
                        Kepala Sekolah: Hadi Latifudin, S.Pd.
                    </p>
                    <p class="text-sm text-emerald-200/80">
                        <i class="fa-solid fa-phone text-gold-400 mr-2"></i>
                        +62 812-8000-1945
                    </p>
                </div>
            </div>

            <div class="mt-12 pt-8 border-t border-emerald-900 flex flex-col sm:flex-row items-center justify-between gap-4 text-xs text-emerald-300/70">
                <p>&copy; <span id="current-year">2026</span> Yayasan Alhadi Karanggan. Hak Cipta Dilindungi.</p>
                <p>Desa Karanggan, Kecamatan Gunung Putri, Kabupaten Bogor</p>
            </div>
        </div>
    </footer>

    <!-- Tombol WhatsApp Mengambang -->
    <a href="https://wa.me/6281280001945?text=Assalamu'alaikum%20Admin%20Yayasan%20Alhadi%20Karanggan,%20saya%20ingin%20bertanya%20mengenai%20informasi%20pendaftaran%20siswa%20baru." 
       target="_blank" rel="noopener noreferrer" aria-label="Chat WhatsApp Yayasan Alhadi"
       class="fixed bottom-5 right-5 z-40 bg-green-600 hover:bg-green-700 text-white w-14 h-14 rounded-full shadow-2xl flex items-center justify-center text-2xl transition-transform hover:scale-110">
        <i class="fa-brands fa-whatsapp"></i>
    </a>

    <!-- JavaScript Interaktif -->
    <script>
        document.addEventListener('DOMContentLoaded', () => {
            // Set tahun dinamis
            document.getElementById('current-year').textContent = new Date().getFullYear();

            // 1. Toggle Menu Mobile
            const mobileMenuBtn = document.getElementById('mobile-menu-btn');
            const mobileMenu = document.getElementById('mobile-menu');
            const mobileLinks = document.querySelectorAll('.mobile-link');

            mobileMenuBtn.addEventListener('click', () => {
                mobileMenu.classList.toggle('hidden');
            });

            mobileLinks.forEach(link => {
                link.addEventListener('click', () => {
                    mobileMenu.classList.add('hidden');
                });
            });

            // 2. Filter Tab Program Pendidikan
            const tabs = document.querySelectorAll('.program-tab');
            const cards = document.querySelectorAll('.program-card');

            tabs.forEach(tab => {
                tab.addEventListener('click', () => {
                    const target = tab.getAttribute('data-target');

                    // Update styling tab aktif
                    tabs.forEach(t => {
                        t.classList.remove('bg-emerald-800', 'text-white', 'shadow');
                        t.classList.add('bg-slate-100', 'text-slate-700');
                    });
                    tab.classList.remove('bg-slate-100', 'text-slate-700');
                    tab.classList.add('bg-emerald-800', 'text-white', 'shadow');

                    // Filter kartu
                    cards.forEach(card => {
                        if (target === 'all' || card.getAttribute('data-category') === target) {
                            card.classList.remove('hidden');
                        } else {
                            card.classList.add('hidden');
                        }
                    });
                });
            });

            // 3. Animasi Fade-Up Saat Scroll
            const observer = new IntersectionObserver((entries) => {
                entries.forEach(entry => {
                    if (entry.isIntersecting) {
                        entry.target.classList.add('visible');
                    }
                });
            }, { threshold: 0.12 });

            document.querySelectorAll('.fade-up').forEach(el => observer.observe(el));

            // 4. Validasi & Pengiriman Formulir PPDB Interaktif
            const ppdbForm = document.getElementById('ppdb-form');
            const formError = document.getElementById('form-error');
            const formErrorText = document.getElementById('form-error-text');
            const ppdbSuccess = document.getElementById('ppdb-success');
            const successSummary = document.getElementById('success-summary');
            const waDirectBtn = document.getElementById('wa-direct-btn');
            const resetPpdbBtn = document.getElementById('reset-ppdb-btn');

            ppdbForm.addEventListener('submit', (e) => {
                e.preventDefault();
                formError.classList.add('hidden');

                const namaSiswa = document.getElementById('namaSiswa').value.trim();
                const jenjang = document.getElementById('jenjang').value.trim();
                const namaOrtu = document.getElementById('namaOrtu').value.trim();
                const noWa = document.getElementById('noWa').value.trim();
                const alamat = document.getElementById('alamat').value.trim();

                if (!namaSiswa || !jenjang || !namaOrtu || !noWa || !alamat) {
                    formErrorText.textContent = 'Mohon lengkapi seluruh data calon siswa dan orang tua sebelum mengirim.';
                    formError.classList.remove('hidden');
                    return;
                }

                if (noWa.length < 9) {
                    formErrorText.textContent = 'Nomor WhatsApp tidak valid. Masukkan minimal 9 digit angka.';
                    formError.classList.remove('hidden');
                    return;
                }

                // Tampilkan pesan sukses & susun tautan WhatsApp otomatis
                successSummary.innerHTML = `Terima kasih Bapak/Ibu <strong>${escapeHtml(namaOrtu)}</strong>. Data pendaftaran ananda <strong>${escapeHtml(namaSiswa)}</strong> untuk jenjang <strong>${escapeHtml(jenjang)}</strong> telah kami terima.`;

                const waMessage = `Assalamu'alaikum Admin PPDB Yayasan Alhadi Karanggan.%0A%0ASaya ingin mengonfirmasi pendaftaran siswa baru:%0A- Nama Calon Siswa: *${encodeURIComponent(namaSiswa)}*%0A- Jenjang: *${encodeURIComponent(jenjang)}*%0A- Nama Orang Tua/Wali: *${encodeURIComponent(namaOrtu)}*%0A- No. WhatsApp: *${encodeURIComponent(noWa)}*%0A- Alamat: *${encodeURIComponent(alamat)}*%0A%0AMohon informasi tahap selanjutnya. Terima kasih.`;

                waDirectBtn.href = `https://wa.me/6281280001945?text=${waMessage}`;

                ppdbForm.classList.add('hidden');
                ppdbSuccess.classList.remove('hidden');
            });

            resetPpdbBtn.addEventListener('click', () => {
                ppdbForm.reset();
                ppdbSuccess.classList.add('hidden');
                ppdbForm.classList.remove('hidden');
            });
        });

        // Fungsi Pilih Jenjang Otomatis dari Kartu Program
        function selectProgram(programName) {
            const selectEl = document.getElementById('jenjang');
            if (selectEl) {
                selectEl.value = programName;
            }
        }

        // Fungsi Salin Alamat ke Clipboard
        function copyAddress() {
            const addressText = "Yayasan Alhadi Karanggan - Karanggan Muda RT 003 RW 004, Desa Karanggan, Kecamatan Gunung Putri, Kabupaten Bogor, Jawa Barat";
            const tempInput = document.createElement('textarea');
            tempInput.value = addressText;
            document.body.appendChild(tempInput);
            tempInput.select();
            document.execCommand('copy');
            document.body.removeChild(tempInput);

            const statusEl = document.getElementById('copy-status');
            statusEl.textContent = 'Alamat Tersalin!';
            setTimeout(() => {
                statusEl.textContent = 'Salin Alamat';
            }, 2500);
        }

        // Sanitasi HTML sederhana untuk output form
        function escapeHtml(text) {
            const div = document.createElement('div');
            div.textContent = text;
            return div.innerHTML;
        }
    </script>
</body>
</html>

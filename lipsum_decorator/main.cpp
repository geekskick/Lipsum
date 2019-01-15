#include <iostream>

class word{
public:
    virtual const std::string get() const = 0;
};

class word_decorator: public word{
public:
    word_decorator(const word& inner) : m_i{inner}{}
protected:
    const word& m_i;
};

class Lorem: public word {
public:
    Lorem() = default;
    const std::string get() const override { return "Lorem"; }
};

class Maecenas: public word_decorator {
public:
    Maecenas(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Maecenas"; }
};

class ullamcorper: public word_decorator {
public:
    ullamcorper(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ullamcorper"; }
};

class nisl_comma: public word_decorator {
public:
    nisl_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nisl,"; }
};

class Donec: public word_decorator {
public:
    Donec(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Donec"; }
};

class sed_comma: public word_decorator {
public:
    sed_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sed,"; }
};

class Duis: public word_decorator {
public:
    Duis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Duis"; }
};

class ligula: public word_decorator {
public:
    ligula(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ligula"; }
};

class laoreet_period: public word_decorator {
public:
    laoreet_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " laoreet."; }
};

class sem: public word_decorator {
public:
    sem(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sem"; }
};

class libero: public word_decorator {
public:
    libero(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " libero"; }
};

class pellentesque_comma: public word_decorator {
public:
    pellentesque_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pellentesque,"; }
};

class dis: public word_decorator {
public:
    dis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dis"; }
};

class rhoncus: public word_decorator {
public:
    rhoncus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " rhoncus"; }
};

class lectus: public word_decorator {
public:
    lectus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lectus"; }
};

class lorem: public word_decorator {
public:
    lorem(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lorem"; }
};

class Malesuada: public word_decorator {
public:
    Malesuada(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Malesuada"; }
};

class et_comma: public word_decorator {
public:
    et_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " et,"; }
};

class netus: public word_decorator {
public:
    netus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " netus"; }
};

class egestas_comma: public word_decorator {
public:
    egestas_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " egestas,"; }
};

class consectetuer_period: public word_decorator {
public:
    consectetuer_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " consectetuer."; }
};

class lacinia: public word_decorator {
public:
    lacinia(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lacinia"; }
};

class natoque: public word_decorator {
public:
    natoque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " natoque"; }
};

class consectetuer: public word_decorator {
public:
    consectetuer(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " consectetuer"; }
};

class id: public word_decorator {
public:
    id(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " id"; }
};

class id_period: public word_decorator {
public:
    id_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " id."; }
};

class hamenaeos: public word_decorator {
public:
    hamenaeos(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " hamenaeos"; }
};

class Nisl: public word_decorator {
public:
    Nisl(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Nisl"; }
};

class molestie: public word_decorator {
public:
    molestie(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " molestie"; }
};

class vitae_comma: public word_decorator {
public:
    vitae_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vitae,"; }
};

class leo: public word_decorator {
public:
    leo(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " leo"; }
};

class metus: public word_decorator {
public:
    metus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " metus"; }
};

class ligula_period: public word_decorator {
public:
    ligula_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ligula."; }
};

class cras_period: public word_decorator {
public:
    cras_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " cras."; }
};

class sollicitudin: public word_decorator {
public:
    sollicitudin(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sollicitudin"; }
};

class Curabitur: public word_decorator {
public:
    Curabitur(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Curabitur"; }
};

class etiam: public word_decorator {
public:
    etiam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " etiam"; }
};

class congue: public word_decorator {
public:
    congue(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " congue"; }
};

class Etiam: public word_decorator {
public:
    Etiam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Etiam"; }
};

class convallis: public word_decorator {
public:
    convallis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " convallis"; }
};

class mollis_period: public word_decorator {
public:
    mollis_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " mollis."; }
};

class primis: public word_decorator {
public:
    primis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " primis"; }
};

class Enim: public word_decorator {
public:
    Enim(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Enim"; }
};

class tortor: public word_decorator {
public:
    tortor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " tortor"; }
};

class inceptos: public word_decorator {
public:
    inceptos(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " inceptos"; }
};

class aenean: public word_decorator {
public:
    aenean(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " aenean"; }
};

class nec: public word_decorator {
public:
    nec(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nec"; }
};

class lacus: public word_decorator {
public:
    lacus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lacus"; }
};

class sagittis: public word_decorator {
public:
    sagittis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sagittis"; }
};

class magna: public word_decorator {
public:
    magna(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " magna"; }
};

class felis: public word_decorator {
public:
    felis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " felis"; }
};

class morbi: public word_decorator {
public:
    morbi(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " morbi"; }
};

class condimentum: public word_decorator {
public:
    condimentum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " condimentum"; }
};

class felis_period: public word_decorator {
public:
    felis_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " felis."; }
};

class suspendisse_comma: public word_decorator {
public:
    suspendisse_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " suspendisse,"; }
};

class integer_comma: public word_decorator {
public:
    integer_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " integer,"; }
};

class integer: public word_decorator {
public:
    integer(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " integer"; }
};

class elit: public word_decorator {
public:
    elit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " elit"; }
};

class Congue: public word_decorator {
public:
    Congue(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Congue"; }
};

class lectus_comma: public word_decorator {
public:
    lectus_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lectus,"; }
};

class Morbi: public word_decorator {
public:
    Morbi(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Morbi"; }
};

class nibh_period: public word_decorator {
public:
    nibh_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nibh."; }
};

class laoreet_comma: public word_decorator {
public:
    laoreet_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " laoreet,"; }
};

class dignissim: public word_decorator {
public:
    dignissim(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dignissim"; }
};

class dolor: public word_decorator {
public:
    dolor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dolor"; }
};

class commodo: public word_decorator {
public:
    commodo(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " commodo"; }
};

class vestibulum: public word_decorator {
public:
    vestibulum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vestibulum"; }
};

class ultricies: public word_decorator {
public:
    ultricies(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ultricies"; }
};

class quisque: public word_decorator {
public:
    quisque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " quisque"; }
};

class pretium_comma: public word_decorator {
public:
    pretium_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pretium,"; }
};

class Varius: public word_decorator {
public:
    Varius(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Varius"; }
};

class vel_comma: public word_decorator {
public:
    vel_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vel,"; }
};

class auctor: public word_decorator {
public:
    auctor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " auctor"; }
};

class maecenas: public word_decorator {
public:
    maecenas(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " maecenas"; }
};

class proin: public word_decorator {
public:
    proin(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " proin"; }
};

class mattis: public word_decorator {
public:
    mattis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " mattis"; }
};

class suspendisse: public word_decorator {
public:
    suspendisse(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " suspendisse"; }
};

class et_period: public word_decorator {
public:
    et_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " et."; }
};

class eros: public word_decorator {
public:
    eros(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " eros"; }
};

class ipsum: public word_decorator {
public:
    ipsum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ipsum"; }
};

class in: public word_decorator {
public:
    in(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " in"; }
};

class tempor: public word_decorator {
public:
    tempor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " tempor"; }
};

class nostra_comma: public word_decorator {
public:
    nostra_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nostra,"; }
};

class dui: public word_decorator {
public:
    dui(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dui"; }
};

class est_period: public word_decorator {
public:
    est_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " est."; }
};

class magnis_period: public word_decorator {
public:
    magnis_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " magnis."; }
};

class erat: public word_decorator {
public:
    erat(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " erat"; }
};

class esse: public word_decorator {
public:
    esse(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " esse"; }
};

class dictumst: public word_decorator {
public:
    dictumst(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dictumst"; }
};

class enim: public word_decorator {
public:
    enim(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " enim"; }
};

class taciti_period: public word_decorator {
public:
    taciti_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " taciti."; }
};

class ad: public word_decorator {
public:
    ad(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ad"; }
};

class Consectetuer: public word_decorator {
public:
    Consectetuer(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Consectetuer"; }
};

class augue: public word_decorator {
public:
    augue(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " augue"; }
};

class eleifend_comma: public word_decorator {
public:
    eleifend_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " eleifend,"; }
};

class a_comma: public word_decorator {
public:
    a_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " a,"; }
};

class tempor_period: public word_decorator {
public:
    tempor_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " tempor."; }
};

class ante: public word_decorator {
public:
    ante(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ante"; }
};

class aliquet_comma: public word_decorator {
public:
    aliquet_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " aliquet,"; }
};

class turpis: public word_decorator {
public:
    turpis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " turpis"; }
};

class dapibus: public word_decorator {
public:
    dapibus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dapibus"; }
};

class conubia: public word_decorator {
public:
    conubia(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " conubia"; }
};

class Sociosqu: public word_decorator {
public:
    Sociosqu(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Sociosqu"; }
};

class mauris_comma: public word_decorator {
public:
    mauris_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " mauris,"; }
};

class nec_comma: public word_decorator {
public:
    nec_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nec,"; }
};

class urna_comma: public word_decorator {
public:
    urna_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " urna,"; }
};

class duis_period: public word_decorator {
public:
    duis_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " duis."; }
};

class viverra: public word_decorator {
public:
    viverra(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " viverra"; }
};

class eu: public word_decorator {
public:
    eu(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " eu"; }
};

class lobortis: public word_decorator {
public:
    lobortis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lobortis"; }
};

class temporibus: public word_decorator {
public:
    temporibus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " temporibus"; }
};

class molestie_comma: public word_decorator {
public:
    molestie_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " molestie,"; }
};

class faucibus: public word_decorator {
public:
    faucibus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " faucibus"; }
};

class fermentum: public word_decorator {
public:
    fermentum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " fermentum"; }
};

class Suscipit: public word_decorator {
public:
    Suscipit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Suscipit"; }
};

class at_comma: public word_decorator {
public:
    at_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " at,"; }
};

class maecenas_comma: public word_decorator {
public:
    maecenas_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " maecenas,"; }
};

class neque: public word_decorator {
public:
    neque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " neque"; }
};

class nunc_comma: public word_decorator {
public:
    nunc_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nunc,"; }
};

class velit_comma: public word_decorator {
public:
    velit_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " velit,"; }
};

class hendrerit_comma: public word_decorator {
public:
    hendrerit_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " hendrerit,"; }
};

class amet: public word_decorator {
public:
    amet(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " amet"; }
};

class imperdiet_comma: public word_decorator {
public:
    imperdiet_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " imperdiet,"; }
};

class eleifend_period: public word_decorator {
public:
    eleifend_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " eleifend."; }
};

class leo_comma: public word_decorator {
public:
    leo_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " leo,"; }
};

class Ac: public word_decorator {
public:
    Ac(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Ac"; }
};

class donec: public word_decorator {
public:
    donec(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " donec"; }
};

class risus: public word_decorator {
public:
    risus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " risus"; }
};

class ultricies_period: public word_decorator {
public:
    ultricies_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ultricies."; }
};

class Faucibus: public word_decorator {
public:
    Faucibus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Faucibus"; }
};

class nulla: public word_decorator {
public:
    nulla(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nulla"; }
};

class sit_period: public word_decorator {
public:
    sit_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sit."; }
};

class a: public word_decorator {
public:
    a(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " a"; }
};

class porttitor: public word_decorator {
public:
    porttitor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " porttitor"; }
};

class elit_comma: public word_decorator {
public:
    elit_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " elit,"; }
};

class orci: public word_decorator {
public:
    orci(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " orci"; }
};

class iusto_comma: public word_decorator {
public:
    iusto_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " iusto,"; }
};

class Sodales: public word_decorator {
public:
    Sodales(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Sodales"; }
};

class auctor_comma: public word_decorator {
public:
    auctor_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " auctor,"; }
};

class feugiat: public word_decorator {
public:
    feugiat(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " feugiat"; }
};

class est_comma: public word_decorator {
public:
    est_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " est,"; }
};

class Repellat: public word_decorator {
public:
    Repellat(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Repellat"; }
};

class cras: public word_decorator {
public:
    cras(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " cras"; }
};

class quia: public word_decorator {
public:
    quia(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " quia"; }
};

class excepturi: public word_decorator {
public:
    excepturi(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " excepturi"; }
};

class ornare: public word_decorator {
public:
    ornare(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ornare"; }
};

class lacus_period: public word_decorator {
public:
    lacus_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " lacus."; }
};

class ante_period: public word_decorator {
public:
    ante_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ante."; }
};

class amet_comma: public word_decorator {
public:
    amet_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " amet,"; }
};

class Nec: public word_decorator {
public:
    Nec(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Nec"; }
};

class hasellus: public word_decorator {
public:
    hasellus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " hasellus"; }
};

class et: public word_decorator {
public:
    et(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " et"; }
};

class volutpat_period: public word_decorator {
public:
    volutpat_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " volutpat."; }
};

class habitasse: public word_decorator {
public:
    habitasse(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " habitasse"; }
};

class adipiscing_comma: public word_decorator {
public:
    adipiscing_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " adipiscing,"; }
};

class pretium: public word_decorator {
public:
    pretium(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pretium"; }
};

class Wisi: public word_decorator {
public:
    Wisi(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Wisi"; }
};

class class_comma: public word_decorator {
public:
    class_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " class,"; }
};

class Porttitor: public word_decorator {
public:
    Porttitor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Porttitor"; }
};

class per: public word_decorator {
public:
    per(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " per"; }
};

class quis: public word_decorator {
public:
    quis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " quis"; }
};

class posuere: public word_decorator {
public:
    posuere(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " posuere"; }
};

class adipiscing: public word_decorator {
public:
    adipiscing(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " adipiscing"; }
};

class quam: public word_decorator {
public:
    quam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " quam"; }
};

class dui_comma: public word_decorator {
public:
    dui_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dui,"; }
};

class non: public word_decorator {
public:
    non(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " non"; }
};

class bibendum: public word_decorator {
public:
    bibendum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " bibendum"; }
};

class elementum: public word_decorator {
public:
    elementum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " elementum"; }
};

class nunc: public word_decorator {
public:
    nunc(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nunc"; }
};

class mollis: public word_decorator {
public:
    mollis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " mollis"; }
};

class Vestibulum: public word_decorator {
public:
    Vestibulum(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Vestibulum"; }
};

class ac_comma: public word_decorator {
public:
    ac_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ac,"; }
};

class pharetra: public word_decorator {
public:
    pharetra(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pharetra"; }
};

class facilisis_period: public word_decorator {
public:
    facilisis_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " facilisis."; }
};

class orci_comma: public word_decorator {
public:
    orci_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " orci,"; }
};

class Arcu: public word_decorator {
public:
    Arcu(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Arcu"; }
};

class accumsan: public word_decorator {
public:
    accumsan(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " accumsan"; }
};

class pulvinar_period: public word_decorator {
public:
    pulvinar_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pulvinar."; }
};

class aliquam_period: public word_decorator {
public:
    aliquam_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " aliquam."; }
};

class sociis: public word_decorator {
public:
    sociis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sociis"; }
};

class semper: public word_decorator {
public:
    semper(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " semper"; }
};

class porta: public word_decorator {
public:
    porta(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " porta"; }
};

class aliquet: public word_decorator {
public:
    aliquet(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " aliquet"; }
};

class sit: public word_decorator {
public:
    sit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sit"; }
};

class cum_comma: public word_decorator {
public:
    cum_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " cum,"; }
};

class sit_comma: public word_decorator {
public:
    sit_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sit,"; }
};

class arcu: public word_decorator {
public:
    arcu(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " arcu"; }
};

class luctus_comma: public word_decorator {
public:
    luctus_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " luctus,"; }
};

class nibh_comma: public word_decorator {
public:
    nibh_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nibh,"; }
};

class at_period: public word_decorator {
public:
    at_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " at."; }
};

class diam: public word_decorator {
public:
    diam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " diam"; }
};

class Sociis: public word_decorator {
public:
    Sociis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Sociis"; }
};

class vestibulum_comma: public word_decorator {
public:
    vestibulum_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vestibulum,"; }
};

class vivamus: public word_decorator {
public:
    vivamus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vivamus"; }
};

class vitae_period: public word_decorator {
public:
    vitae_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vitae."; }
};

class senectus: public word_decorator {
public:
    senectus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " senectus"; }
};

class wisi_comma: public word_decorator {
public:
    wisi_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " wisi,"; }
};

class Aliquam: public word_decorator {
public:
    Aliquam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Aliquam"; }
};

class eleifend: public word_decorator {
public:
    eleifend(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " eleifend"; }
};

class sodales: public word_decorator {
public:
    sodales(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sodales"; }
};

class fermentum_comma: public word_decorator {
public:
    fermentum_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " fermentum,"; }
};

class vehicula: public word_decorator {
public:
    vehicula(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vehicula"; }
};

class ut: public word_decorator {
public:
    ut(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ut"; }
};

class morbi_comma: public word_decorator {
public:
    morbi_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " morbi,"; }
};

class Tortor: public word_decorator {
public:
    Tortor(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Tortor"; }
};

class pede: public word_decorator {
public:
    pede(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pede"; }
};

class laoreet: public word_decorator {
public:
    laoreet(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " laoreet"; }
};

class nec_period: public word_decorator {
public:
    nec_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nec."; }
};

class suscipit: public word_decorator {
public:
    suscipit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " suscipit"; }
};

class luctus: public word_decorator {
public:
    luctus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " luctus"; }
};

class scelerisque: public word_decorator {
public:
    scelerisque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " scelerisque"; }
};

class nullam: public word_decorator {
public:
    nullam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nullam"; }
};

class wisi: public word_decorator {
public:
    wisi(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " wisi"; }
};

class ridiculus: public word_decorator {
public:
    ridiculus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ridiculus"; }
};

class praesent_period: public word_decorator {
public:
    praesent_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " praesent."; }
};

class sodales_comma: public word_decorator {
public:
    sodales_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sodales,"; }
};

class diam_comma: public word_decorator {
public:
    diam_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " diam,"; }
};

class imperdiet: public word_decorator {
public:
    imperdiet(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " imperdiet"; }
};

class duis: public word_decorator {
public:
    duis(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " duis"; }
};

class dictum_comma: public word_decorator {
public:
    dictum_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dictum,"; }
};

class vel: public word_decorator {
public:
    vel(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vel"; }
};

class tincidunt_period: public word_decorator {
public:
    tincidunt_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " tincidunt."; }
};

class nullam_comma: public word_decorator {
public:
    nullam_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nullam,"; }
};

class vitae: public word_decorator {
public:
    vitae(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vitae"; }
};

class nisl: public word_decorator {
public:
    nisl(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nisl"; }
};

class vehicula_comma: public word_decorator {
public:
    vehicula_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " vehicula,"; }
};

class Justo: public word_decorator {
public:
    Justo(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Justo"; }
};

class purus: public word_decorator {
public:
    purus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " purus"; }
};

class pellentesque: public word_decorator {
public:
    pellentesque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " pellentesque"; }
};

class tellus: public word_decorator {
public:
    tellus(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " tellus"; }
};

class malesuada: public word_decorator {
public:
    malesuada(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " malesuada"; }
};

class molestiae: public word_decorator {
public:
    molestiae(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " molestiae"; }
};

class In: public word_decorator {
public:
    In(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " In"; }
};

class aliquam: public word_decorator {
public:
    aliquam(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " aliquam"; }
};

class nulla_comma: public word_decorator {
public:
    nulla_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nulla,"; }
};

class nibh: public word_decorator {
public:
    nibh(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " nibh"; }
};

class erat_comma: public word_decorator {
public:
    erat_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " erat,"; }
};

class in_comma: public word_decorator {
public:
    in_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " in,"; }
};

class Mauris: public word_decorator {
public:
    Mauris(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Mauris"; }
};

class velit: public word_decorator {
public:
    velit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " velit"; }
};

class sed: public word_decorator {
public:
    sed(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " sed"; }
};

class mauris: public word_decorator {
public:
    mauris(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " mauris"; }
};

class at: public word_decorator {
public:
    at(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " at"; }
};

class ac_period: public word_decorator {
public:
    ac_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ac."; }
};

class est: public word_decorator {
public:
    est(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " est"; }
};

class risus_period: public word_decorator {
public:
    risus_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " risus."; }
};

class Eros: public word_decorator {
public:
    Eros(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Eros"; }
};

class consectetuer_comma: public word_decorator {
public:
    consectetuer_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " consectetuer,"; }
};

class in_period: public word_decorator {
public:
    in_period(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " in."; }
};

class ac: public word_decorator {
public:
    ac(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ac"; }
};

class Natoque: public word_decorator {
public:
    Natoque(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " Natoque"; }
};

class volutpat: public word_decorator {
public:
    volutpat(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " volutpat"; }
};

class praesent: public word_decorator {
public:
    praesent(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " praesent"; }
};

class hendrerit: public word_decorator {
public:
    hendrerit(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " hendrerit"; }
};

class quo: public word_decorator {
public:
    quo(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " quo"; }
};

class montes_comma: public word_decorator {
public:
    montes_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " montes,"; }
};

class dignissimos: public word_decorator {
public:
    dignissimos(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " dignissimos"; }
};

class ultrices_comma: public word_decorator {
public:
    ultrices_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " ultrices,"; }
};

class venenatis_comma: public word_decorator {
public:
    venenatis_comma(const word& in): word_decorator{in}{}
    const std::string get() const override { return m_i.get() + " venenatis,"; }
};


int main(){
    std::cout <<  lacus_period{ nisl{ sed{ sollicitudin{ mauris_comma{ diam{ ut{ dui_comma{ aliquam{ eleifend{ dolor{ sed{ luctus_comma{ suscipit{ ligula{ orci{ In{ at_period{ feugiat{ nunc_comma{ lacus{ sodales{ pellentesque_comma{ dis{ condimentum{ eros{ dignissim{ lacinia{ dolor{ wisi_comma{ excepturi{ auctor{ ante{ nulla{ Sodales{ aliquam_period{ lacus{ et{ sit{ lorem{ ut{ a_comma{ leo{ molestiae{ velit{ dapibus{ hendrerit_comma{ sit{ sed{ Natoque{ ante_period{ viverra{ metus{ praesent{ vivamus{ ac_comma{ quo{ maecenas_comma{ nec{ mattis{ ut{ hendrerit{ purus{ nibh_comma{ ac{ nulla{ leo{ conubia{ enim{ arcu{ dictum_comma{ suspendisse{ aenean{ semper{ netus{ Sociosqu{ sit_period{ a{ in{ sem{ posuere{ velit_comma{ nibh{ rhoncus{ wisi{ eu{ suspendisse_comma{ at{ mauris{ consectetuer_comma{ lacus{ dui{ volutpat{ Vestibulum{ nibh_period{ et{ elit{ felis{ morbi{ iusto_comma{ velit{ donec{ sit_comma{ maecenas{ aenean{ quis{ amet{ augue{ luctus{ nisl_comma{ commodo{ vestibulum{ risus{ tortor{ Congue{ sit_period{ amet{ diam{ risus{ arcu{ Donec{ felis_period{ libero{ ridiculus{ eu{ eros{ Nec{ praesent_period{ adipiscing{ lobortis{ vestibulum_comma{ sed{ eros{ ac{ luctus{ imperdiet_comma{ dignissimos{ hamenaeos{ nec{ sociis{ Eros{ ultricies_period{ et{ at{ aliquet_comma{ sed{ lectus{ duis{ turpis{ convallis{ ante{ urna_comma{ cras{ dignissim{ at{ et{ vestibulum{ lacus{ at_comma{ praesent{ scelerisque{ porta{ Congue{ consectetuer_period{ et{ amet{ consectetuer{ at{ vitae_comma{ inceptos{ laoreet{ orci{ vestibulum{ lectus_comma{ hasellus{ velit{ vehicula{ primis{ lectus{ ultrices_comma{ quis{ ut{ posuere{ in{ nulla_comma{ orci{ ipsum{ ligula{ nec{ Suscipit{ mollis_period{ nisl{ proin{ neque{ mauris{ maecenas{ a{ maecenas_comma{ amet{ morbi_comma{ suspendisse{ amet{ molestie_comma{ integer{ Morbi{ laoreet_period{ vitae{ arcu{ nisl{ et_comma{ posuere{ adipiscing{ esse{ lectus{ porta{ orci_comma{ diam{ rhoncus{ eros{ convallis{ tellus{ quia{ erat_comma{ etiam{ quam{ mauris{ suspendisse{ sodales{ In{ ligula_period{ sed{ in_comma{ felis{ vestibulum{ in{ id{ sit{ cras{ venenatis_comma{ in{ eleifend{ in{ augue{ a_comma{ ac{ tempor{ fermentum{ nisl{ amet_comma{ nec{ suscipit{ leo{ mattis{ Wisi{ in_period{ vivamus{ adipiscing_comma{ faucibus{ aliquam{ neque{ suspendisse_comma{ at{ Mauris{ et_period{ vel{ a{ a{ molestie_comma{ tortor{ eleifend_comma{ Malesuada{ id_period{ fermentum{ Justo{ risus_period{ a{ wisi{ felis{ erat{ magna{ ornare{ diam_comma{ vehicula{ in{ vehicula_comma{ pellentesque{ ornare{ ipsum{ arcu{ Consectetuer{ facilisis_period{ wisi{ eros{ tortor{ vitae{ Tortor{ mollis_period{ molestie_comma{ dignissim{ ullamcorper{ amet{ Aliquam{ magnis_period{ congue{ dictumst{ a{ vivamus{ turpis{ sed_comma{ mollis{ erat{ auctor_comma{ Curabitur{ tempor_period{ fermentum{ ipsum{ praesent{ quisque{ egestas_comma{ porta{ faucibus{ libero{ bibendum{ praesent{ id{ at_comma{ wisi{ vel_comma{ vitae{ In{ et_period{ arcu{ amet{ lacus{ lobortis{ tellus{ montes_comma{ Duis{ est_period{ elementum{ turpis{ natoque{ Varius{ ac_period{ leo{ est{ malesuada{ erat_comma{ nullam{ dolor{ eleifend{ amet{ sollicitudin{ ultricies{ cum_comma{ sem{ et_comma{ erat{ orci{ Repellat{ eleifend_period{ vehicula{ laoreet_comma{ ligula{ mauris{ molestie{ Etiam{ pulvinar_period{ senectus{ libero{ imperdiet{ mollis{ Porttitor{ tincidunt_period{ lectus{ aliquet_comma{ pretium{ Mauris{ vitae_period{ id{ tempor{ id{ ullamcorper{ feugiat{ sodales_comma{ pharetra{ et_comma{ diam{ nec_comma{ libero{ ut{ molestie{ lacus{ nullam_comma{ bibendum{ amet{ adipiscing{ ac{ dolor{ Ac{ nec_period{ scelerisque{ temporibus{ leo_comma{ pellentesque{ nec{ volutpat{ vel_comma{ in{ eros{ Enim{ duis_period{ libero{ dapibus{ diam{ per{ arcu{ imperdiet{ auctor_comma{ sed{ aliquet{ adipiscing_comma{ ut{ class_comma{ porttitor{ pede{ purus{ ipsum{ est_comma{ elementum{ habitasse{ Arcu{ at_period{ Faucibus{ cras_period{ libero{ eu{ vel{ mauris_comma{ sociis{ dolor{ sodales_comma{ felis{ sagittis{ aliquet_comma{ dui{ non{ netus{ dolor{ a{ integer_comma{ in{ mauris{ Sociis{ taciti_period{ accumsan{ nostra_comma{ ligula{ maecenas{ aliquam{ Maecenas{ tincidunt_period{ magna{ sit_comma{ ultricies{ nunc{ enim{ wisi{ congue{ elit_comma{ vel{ est_comma{ turpis{ rhoncus{ Nisl{ volutpat_period{ vestibulum{ ad{ integer{ enim{ fermentum_comma{ tempor{ rhoncus{ pretium_comma{ nulla{ suspendisse{ ligula{ amet_comma{ sit{ dolor{ ipsum{ Lorem() } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } }.get() << std::endl;
}

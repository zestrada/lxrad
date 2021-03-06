CPWindow1::CPWindow1(void)
{
  SetFOwner(this);
  SetClass(wxT("CPWindow"));
  SetName(wxT("window1"));
  SetTag(0);
  SetX(486);
  SetY(274);
  SetWidth(375);
  SetHeight(404);
  SetHint(wxT(""));
  SetEnable(1);
  SetVisible(1);
  SetColor(wxT("#000001"));
  SetPopupMenu(NULL);
  SetTitle(wxT("Editor"));
  SetOverrideRedirect(0);
  EvOnCreate=EVONCREATE & CPWindow1::_EvOnCreate;
  //menu1
  menu1.SetFOwner(this);
  menu1.SetClass(wxT("CMenu"));
  menu1.SetName(wxT("menu1"));
  menu1.SetTag(0);
  menu1.SetMenuItems(wxT("Arquivo,Editar,Ajuda,"));
  CreateChild(&menu1);
  //filedialog1
  filedialog1.SetFOwner(this);
  filedialog1.SetClass(wxT("CFileDialog"));
  filedialog1.SetName(wxT("filedialog1"));
  filedialog1.SetTag(0);
  filedialog1.SetFileName(wxT("untitled.txt"));
  filedialog1.SetFilter(wxT("All Files (*.*)|*.*"));
  filedialog1.SetType(129);
  filedialog1.EvOnClose=EVONCLOSE & CPWindow1::filedialog1_EvOnClose;
  CreateChild(&filedialog1);
  //filedialog2
  filedialog2.SetFOwner(this);
  filedialog2.SetClass(wxT("CFileDialog"));
  filedialog2.SetName(wxT("filedialog2"));
  filedialog2.SetTag(0);
  filedialog2.SetFileName(wxT("untitled.txt"));
  filedialog2.SetFilter(wxT("All Files (*.*)|*.*"));
  filedialog2.SetType(130);
  filedialog2.EvOnClose=EVONCLOSE & CPWindow1::filedialog2_EvOnClose;
  CreateChild(&filedialog2);
  //menu1_Arquivo
  menu1_Arquivo.SetFOwner(this);
  menu1_Arquivo.SetClass(wxT("CPMenu"));
  menu1_Arquivo.SetName(wxT("menu1_Arquivo"));
  menu1_Arquivo.SetTag(0);
  menu1_Arquivo.SetText(wxT("Arquivo"));
  menu1_Arquivo.SetMenuItems(wxT("Abrir,Salvar,Sair,"));
  menu1.CreateChild(&menu1_Arquivo);
  //menu1_Arquivo_Abrir
  menu1_Arquivo_Abrir.SetFOwner(this);
  menu1_Arquivo_Abrir.SetClass(wxT("CItemMenu"));
  menu1_Arquivo_Abrir.SetName(wxT("menu1_Arquivo_Abrir"));
  menu1_Arquivo_Abrir.SetTag(0);
  menu1_Arquivo_Abrir.SetText(wxT("Abrir"));
  menu1_Arquivo_Abrir.SetEnable(1);
  menu1_Arquivo_Abrir.SetSubMenu(NULL);
  menu1_Arquivo_Abrir.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Arquivo_Abrir_EvMenuActive;
  menu1_Arquivo.CreateChild(&menu1_Arquivo_Abrir);
  //menu1_Arquivo_Salvar
  menu1_Arquivo_Salvar.SetFOwner(this);
  menu1_Arquivo_Salvar.SetClass(wxT("CItemMenu"));
  menu1_Arquivo_Salvar.SetName(wxT("menu1_Arquivo_Salvar"));
  menu1_Arquivo_Salvar.SetTag(0);
  menu1_Arquivo_Salvar.SetText(wxT("Salvar"));
  menu1_Arquivo_Salvar.SetEnable(1);
  menu1_Arquivo_Salvar.SetSubMenu(NULL);
  menu1_Arquivo_Salvar.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Arquivo_Salvar_EvMenuActive;
  menu1_Arquivo.CreateChild(&menu1_Arquivo_Salvar);
  //menu1_Arquivo_Sair
  menu1_Arquivo_Sair.SetFOwner(this);
  menu1_Arquivo_Sair.SetClass(wxT("CItemMenu"));
  menu1_Arquivo_Sair.SetName(wxT("menu1_Arquivo_Sair"));
  menu1_Arquivo_Sair.SetTag(0);
  menu1_Arquivo_Sair.SetText(wxT("Sair"));
  menu1_Arquivo_Sair.SetEnable(1);
  menu1_Arquivo_Sair.SetSubMenu(NULL);
  menu1_Arquivo_Sair.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Arquivo_Sair_EvMenuActive;
  menu1_Arquivo.CreateChild(&menu1_Arquivo_Sair);
  //grid1
  grid1.SetFOwner(this);
  grid1.SetClass(wxT("CGrid"));
  grid1.SetName(wxT("grid1"));
  grid1.SetTag(0);
  grid1.SetX(38);
  grid1.SetY(45);
  grid1.SetWidth(300);
  grid1.SetHeight(300);
  grid1.SetHint(wxT(""));
  grid1.SetEnable(1);
  grid1.SetVisible(1);
  grid1.SetColor(wxT("#000001"));
  grid1.SetPopupMenu(NULL);
  grid1.SetRowsCount(10);
  grid1.SetColsCount(10);
  grid1.SetReadOnly(0);
  grid1.SetEnableDragGridSize(0);
  grid1.SetDefaultRowSize(30);
  grid1.SetDefaultColSize(30);
  grid1.SetRowLabelSize(0);
  grid1.SetColLabelSize(0);
  grid1.EvOnGridCellLeftClick=EVONGRIDCELLLEFTCLICK & CPWindow1::grid1_EvOnGridCellLeftClick;
  CreateChild(&grid1);
  //menu1_Editar
  menu1_Editar.SetFOwner(this);
  menu1_Editar.SetClass(wxT("CPMenu"));
  menu1_Editar.SetName(wxT("menu1_Editar"));
  menu1_Editar.SetTag(0);
  menu1_Editar.SetText(wxT("Editar"));
  menu1_Editar.SetMenuItems(wxT("Limpar,"));
  menu1.CreateChild(&menu1_Editar);
  //menu1_Ajuda
  menu1_Ajuda.SetFOwner(this);
  menu1_Ajuda.SetClass(wxT("CPMenu"));
  menu1_Ajuda.SetName(wxT("menu1_Ajuda"));
  menu1_Ajuda.SetTag(0);
  menu1_Ajuda.SetText(wxT("Ajuda"));
  menu1_Ajuda.SetMenuItems(wxT("Sobre,"));
  menu1.CreateChild(&menu1_Ajuda);
  //menu1_Editar_Limpar
  menu1_Editar_Limpar.SetFOwner(this);
  menu1_Editar_Limpar.SetClass(wxT("CItemMenu"));
  menu1_Editar_Limpar.SetName(wxT("menu1_Editar_Limpar"));
  menu1_Editar_Limpar.SetTag(0);
  menu1_Editar_Limpar.SetText(wxT("Limpar"));
  menu1_Editar_Limpar.SetEnable(1);
  menu1_Editar_Limpar.SetSubMenu(NULL);
  menu1_Editar_Limpar.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Editar_Limpar_EvMenuActive;
  menu1_Editar.CreateChild(&menu1_Editar_Limpar);
  //menu1_Ajuda_Sobre
  menu1_Ajuda_Sobre.SetFOwner(this);
  menu1_Ajuda_Sobre.SetClass(wxT("CItemMenu"));
  menu1_Ajuda_Sobre.SetName(wxT("menu1_Ajuda_Sobre"));
  menu1_Ajuda_Sobre.SetTag(0);
  menu1_Ajuda_Sobre.SetText(wxT("Sobre"));
  menu1_Ajuda_Sobre.SetEnable(1);
  menu1_Ajuda_Sobre.SetSubMenu(NULL);
  menu1_Ajuda_Sobre.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Ajuda_Sobre_EvMenuActive;
  menu1_Ajuda.CreateChild(&menu1_Ajuda_Sobre);
  //label1
  label1.SetFOwner(this);
  label1.SetClass(wxT("CLabel"));
  label1.SetName(wxT("label1"));
  label1.SetTag(0);
  label1.SetX(161);
  label1.SetY(22);
  label1.SetWidth(60);
  label1.SetHeight(20);
  label1.SetHint(wxT(""));
  label1.SetEnable(1);
  label1.SetVisible(1);
  label1.SetColor(wxT("#000001"));
  label1.SetPopupMenu(NULL);
  label1.SetText(wxT("Editor"));
  label1.SetAlign(1);
  CreateChild(&label1);
  /*#Others*/
}

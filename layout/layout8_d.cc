CPWindow8::CPWindow8(void)
{
//lxrad automatic generated block start, don't edit below!  
  SetFOwner(this);
  SetClass(wxT("CPWindow"));
  SetName(wxT("window8"));
  SetTag(0);
  SetX(323);
  SetY(174);
  SetWidth(246);
  SetHeight(256);
  SetHint(wxT(""));
  SetEnable(1);
  SetVisible(0);
  SetPopupMenu(NULL);
  SetTitle(wxT("MenuItens"));
  SetOverrideRedirect(0);
  //list1
  list1.SetFOwner(this);
  list1.SetClass(wxT("CList"));
  list1.SetName(wxT("list1"));
  list1.SetTag(0);
  list1.SetX(17);
  list1.SetY(12);
  list1.SetWidth(202);
  list1.SetHeight(130);
  list1.SetHint(wxT(""));
  list1.SetEnable(1);
  list1.SetVisible(1);
  list1.SetPopupMenu(NULL);
  list1.SetItems(wxT(""));
  CreateChild(&list1);
  //button1
  button1.SetFOwner(this);
  button1.SetClass(wxT("CButton"));
  button1.SetName(wxT("button1"));
  button1.SetTag(0);
  button1.SetX(18);
  button1.SetY(146);
  button1.SetWidth(65);
  button1.SetHeight(28);
  button1.SetHint(wxT(""));
  button1.SetEnable(1);
  button1.SetVisible(1);
  button1.SetPopupMenu(NULL);
  button1.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button1_EvMouseButtonPress;
  button1.SetText(wxT("New"));
  CreateChild(&button1);
  //button2
  button2.SetFOwner(this);
  button2.SetClass(wxT("CButton"));
  button2.SetName(wxT("button2"));
  button2.SetTag(0);
  button2.SetX(17);
  button2.SetY(178);
  button2.SetWidth(65);
  button2.SetHeight(28);
  button2.SetHint(wxT(""));
  button2.SetEnable(1);
  button2.SetVisible(1);
  button2.SetPopupMenu(NULL);
  button2.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button2_EvMouseButtonPress;
  button2.SetText(wxT("Delete"));
  CreateChild(&button2);
  //button3
  button3.SetFOwner(this);
  button3.SetClass(wxT("CButton"));
  button3.SetName(wxT("button3"));
  button3.SetTag(0);
  button3.SetX(87);
  button3.SetY(146);
  button3.SetWidth(65);
  button3.SetHeight(28);
  button3.SetHint(wxT(""));
  button3.SetEnable(1);
  button3.SetVisible(1);
  button3.SetPopupMenu(NULL);
  button3.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button3_EvMouseButtonPress;
  button3.SetText(wxT("Up"));
  CreateChild(&button3);
  //button4
  button4.SetFOwner(this);
  button4.SetClass(wxT("CButton"));
  button4.SetName(wxT("button4"));
  button4.SetTag(0);
  button4.SetX(86);
  button4.SetY(177);
  button4.SetWidth(65);
  button4.SetHeight(28);
  button4.SetHint(wxT(""));
  button4.SetEnable(1);
  button4.SetVisible(1);
  button4.SetPopupMenu(NULL);
  button4.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button4_EvMouseButtonPress;
  button4.SetText(wxT("Down"));
  CreateChild(&button4);
  //button5
  button5.SetFOwner(this);
  button5.SetClass(wxT("CButton"));
  button5.SetName(wxT("button5"));
  button5.SetTag(0);
  button5.SetX(155);
  button5.SetY(147);
  button5.SetWidth(65);
  button5.SetHeight(28);
  button5.SetHint(wxT(""));
  button5.SetEnable(1);
  button5.SetVisible(1);
  button5.SetPopupMenu(NULL);
  button5.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button5_EvMouseButtonPress;
  button5.SetText(wxT("Ok"));
  CreateChild(&button5);
  //button6
  button6.SetFOwner(this);
  button6.SetClass(wxT("CButton"));
  button6.SetName(wxT("button6"));
  button6.SetTag(0);
  button6.SetX(155);
  button6.SetY(177);
  button6.SetWidth(65);
  button6.SetHeight(28);
  button6.SetHint(wxT(""));
  button6.SetEnable(1);
  button6.SetVisible(1);
  button6.SetPopupMenu(NULL);
  button6.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow8::button6_EvMouseButtonPress;
  button6.SetText(wxT("Cancel"));
  CreateChild(&button6);
  /*#Others*/
//lxrad automatic generated block end, don't edit above!
};

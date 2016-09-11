int __fastcall sub_810F118(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@3
  int v3; // r4@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E == 64 && v203925B )
  {
    --v203925B;
    v2 = (unsigned __int8)GetMenuCursorPos();
    MoveMenuCursorNoWrap(-1);
    sub_810F1F4(v2, 64);
  }
  if ( word_300179E == 128 && v203925B != v203925A - 1 )
  {
    ++v203925B;
    v3 = (unsigned __int8)GetMenuCursorPos();
    MoveMenuCursorNoWrap(1);
    sub_810F1F4(v3, 128);
  }
  if ( word_300179E & 1 )
  {
    sub_8072DEC(word_300179E & 1);
    v202E8DC = v203925B;
    audio_play(5u);
    sub_810EEDC();
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0xCu);
    sub_810EC9C(v1);
  }
  if ( word_300179E & 2 )
  {
    sub_8072DEC(word_300179E & 2);
    v202E8DC = 127;
    audio_play(5u);
    sub_810EEDC();
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0xCu);
    sub_810EC9C(v1);
  }
  return v5;
}

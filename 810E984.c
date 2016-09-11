int __fastcall sub_810E984(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r4@3
  int v3; // r4@6
  int v4; // r0@10
  int v5; // r0@12
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E == 64 && v203925B )
  {
    --v203925B;
    v2 = (unsigned __int8)GetMenuCursorPos();
    MoveMenuCursorNoWrap(-1);
    sub_810EAC8(v2, 64);
  }
  if ( word_300179E == 128 && v203925B != v203925A - 1 )
  {
    ++v203925B;
    v3 = (unsigned __int8)GetMenuCursorPos();
    MoveMenuCursorNoWrap(1);
    sub_810EAC8(v3, 128);
  }
  if ( word_300179E & 1 )
  {
    saved_warp2_set_2(0, byte_3000760[4 * v203925B + 1], byte_3000760[4 * v203925B + 2], -1, 2, 1);
    if ( v202E8CE == v203925B )
    {
      v202E8DC = 0;
      audio_play(5u);
      MenuZeroFillWindowRect(0, 0, 0x1Du, 0xCu);
      sub_810EC9C(v1);
    }
    else
    {
      v202E8DC = 1;
      v202E8CE = v203925B;
      sub_810EBEC();
      v4 = FieldObjectTurnByLocalIdAndMap(v202E8DE, v2025739, v2025738, 1u);
      sub_810EEDC(v4);
      MenuZeroFillScreen();
      DestroyTask(v1);
    }
  }
  else if ( word_300179E & 2 )
  {
    v202E8DC = word_300179E & 1;
    v5 = audio_play(5u);
    sub_810EEDC(v5);
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0xCu);
    sub_810EC9C(v1);
  }
  return v7;
}

int sub_80A57C4()
{
  signed int v0; // r5@2
  int v2; // [sp+14h] [bp-4h]@0

  dword_3000704 = (int)&gUnknown_083C16AE + 2 * v2038559;
  if ( v2038559 == 4 )
  {
    v2038564 = 1;
    v0 = 9;
  }
  else if ( sub_80F92F4(v203855E) << 24 )
  {
    v2038564 = 2;
    v0 = 7;
  }
  else
  {
    dword_3000704 = (int)&unk_83C16B6;
    v2038564 = 1;
    v0 = 9;
  }
  sub_80A4008((int)gBG1TilemapBuffer, 7u, v0 + 1, 6u, 2 * v2038564);
  MenuDrawTextWindow(6u, v0);
  sub_80A7834(0, v0);
  InitMenu(0, 7, v0 + 1, v2038564, 0, 6);
  return v2;
}

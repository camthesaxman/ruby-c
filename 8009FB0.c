int __fastcall MainMenuPressedB(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetMainCallback2((int)CB2_InitTitleScreen);
    DestroyTask(v1);
  }
  return v3;
}

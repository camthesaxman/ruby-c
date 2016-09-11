int __fastcall sub_8116B40(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(unsigned __int8)UpdatePaletteFade() )
  {
    SetVBlankCallback(0);
    memset(33656832, 0, 380);
    gSpriteCoordOffsetY = 0;
    gSpriteCoordOffsetX = 0;
    sub_80F9368();
    FreeAllSpritePalettes();
    ResetPaletteFade();
    ResetSpriteData();
    sub_80F9020();
    v4000050 = 0;
    v4000052 = 0;
    v4000054 = 0;
    dword_300485C = (int)sub_8080990;
    SetMainCallback2((int)c2_exit_to_overworld_2_switch);
    DestroyTask(v1);
  }
  return v3;
}

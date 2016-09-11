int __fastcall sub_804DB84(int a1, int a2, int a3)
{
  int v3; // r2@2
  int v4; // r0@2
  int v5; // r0@3
  int v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)sub_804C29C(a1, a2, a3) == 1 )
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 184)]);
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(dword_3004828 + 185)]);
    sub_804BA94(v20297D8, v20297D9 % 6u, v3);
    v4 = dword_3004828;
    *(_WORD *)(dword_3004828 + 158) = -21555;
    *(_BYTE *)(v4 + 189) = 1;
    SetMainCallback2((int)sub_804DC18);
  }
  sub_804BB78();
  v5 = sub_804D63C();
  RunTasks(v5);
  AnimateSprites();
  v6 = BuildOamBuffer();
  UpdatePaletteFade(v6);
  return v8;
}

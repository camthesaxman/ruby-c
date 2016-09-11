int __fastcall sub_80B6C08(int a1)
{
  int v1; // r4@1
  char *v2; // r2@1
  __int16 v3; // r0@1

  v1 = a1;
  v2 = &gSprites[68 * *(_WORD *)(a1 + 58)];
  v2[62] &= 0xFBu;
  v3 = *((_WORD *)v2 + 19) + 1;
  *((_WORD *)v2 + 19) = v3;
  if ( !(v3 & 0x8000) )
  {
    *((_WORD *)v2 + 19) = 0;
    *(_WORD *)(v1 + 46) = 1;
  }
  return 0;
}

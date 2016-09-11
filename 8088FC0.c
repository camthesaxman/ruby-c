int __fastcall sub_8088FC0(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  *((_DWORD *)v1 + 7) = sub_80890D8;
  *((_WORD *)v1 + 16) = 120;
  *((_WORD *)v1 + 17) = 0;
  *((_WORD *)v1 + 18) = 0;
  *((_WORD *)v1 + 19) = 0;
  memset(v1 + 46, 0, 16);
  *((_WORD *)v1 + 29) = 64;
  return v3;
}

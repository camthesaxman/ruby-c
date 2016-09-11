int __fastcall sub_812869C(int a1)
{
  char *v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 33) == 1 )
  {
    v1 = &gSprites[68 * *(_BYTE *)(a1 + 26)];
    ++*((_WORD *)v1 + 23);
  }
  return v3;
}

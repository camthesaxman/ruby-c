int __fastcall sub_808CA64(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r1@1
  unsigned __int8 v3; // r0@3
  int *v4; // r1@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * *(_WORD *)(v202FFB4 + 1574)];
  if ( *((_WORD *)v2 + 16) == 48 && *((_WORD *)v2 + 17) == 56 )
  {
    *(_BYTE *)(v202FFB4 + 1611) = *(_BYTE *)(v202FFB4 + 1610);
    v3 = sub_808F210(v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1550), *(_BYTE *)(v202FFB4 + 1574));
    v4 = &dword_3004B20[10 * v1];
    *((_WORD *)v4 + 4) = v3;
    *v4 = (int)sub_808CAE4;
  }
  return v6;
}

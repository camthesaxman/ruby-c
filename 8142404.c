int __fastcall sub_8142404(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r5@1
  int v3; // r1@1
  int v4; // r6@1
  __int16 v5; // r2@2
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = HIWORD(dword_3004B20[v1 + 2]);
  v4 = 20 * v3 + 33669120;
  if ( *(_WORD *)&gSprites[68 * *(_WORD *)(&byte_3004B28[2 * (v3 + 5)] + v1 * 4) + 46] )
  {
    v5 = *(_WORD *)(20 * v3 + 0x201C008);
    if ( (v5 & 0x1FF) != 412 )
      cry_related(v5 & 0x1FF, 0);
    sub_8143088(v4, 0, 14);
    *((_WORD *)v2 + 7) = 120;
    *v2 = (int)sub_8142484;
  }
  return v7;
}

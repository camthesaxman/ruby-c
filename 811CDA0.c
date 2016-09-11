int __fastcall sub_811CDA0(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r4@1
  char *v4; // r2@2
  signed int v5; // r1@2
  int v7; // [sp+0h] [bp-20h]@1

  v1 = a1;
  memcpy(&v7, (const char *)&gUnknown_083FD8C4, 16);
  LOWORD(v2) = 0;
  v3 = 0;
  do
  {
    v4 = &gSprites[68 * (unsigned __int8)CreateInvisibleSprite((int)sub_811CFD0)];
    *((_WORD *)v4 + 16) = 240;
    *((_WORD *)v4 + 17) = v3;
    *((_WORD *)v4 + 28) = *((_WORD *)&v7 + (signed __int16)v2);
    v5 = ((signed __int16)v2 + 1) << 16;
    v3 = ((v3 << 16) + 1310720) >> 16;
    v2 = ((signed __int16)v2 + 1) & 0xFFFF;
  }
  while ( v5 >> 16 <= 7 );
  ++*((_WORD *)v4 + 29);
  ++*(_WORD *)(v1 + 8);
  return 0;
}

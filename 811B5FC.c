int __fastcall sub_811B5FC(int a1)
{
  int v1; // r7@1
  int v2; // r5@1
  unsigned int v3; // r1@1
  int v4; // r4@2
  int v5; // r4@2
  int v7; // [sp+0h] [bp-28h]@1
  char v8; // [sp+4h] [bp-24h]@1

  v1 = a1;
  memcpy(&v7, (const char *)&gUnknown_083FD7E4, 4);
  memcpy(&v8, (const char *)&gUnknown_083FD7E8, 10);
  LOWORD(v2) = Random() & 1;
  LOWORD(v3) = 0;
  do
  {
    v202FF84 = *((_WORD *)&v7 + (signed __int16)v2);
    v4 = (signed __int16)v3;
    v202FF88 = 32 * (signed __int16)v3 + 16;
    v202FF8C = (signed __int16)v2;
    v202FF90 = *((_WORD *)&v8 + (signed __int16)v3);
    FieldEffectStart(0x2Du);
    v5 = (v4 + 1) << 16;
    v2 = ((signed __int16)v2 ^ 1) & 0xFFFF;
    v3 = (unsigned int)v5 >> 16;
  }
  while ( v5 >> 16 <= 4 );
  ++*(_WORD *)(v1 + 8);
  return 0;
}

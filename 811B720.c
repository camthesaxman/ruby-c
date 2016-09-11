int __fastcall sub_811B720(int a1)
{
  int v1; // r4@1
  int v2; // r1@4
  int v3; // r5@4
  unsigned int v4; // r2@5
  int v5; // r0@6
  int v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@8

  v1 = a1;
  memcpy(&v7, (const char *)&gUnknown_083FD7F2, 4);
  if ( *(_WORD *)(v1 + 48) )
  {
    --*(_WORD *)(v1 + 48);
  }
  else
  {
    if ( (unsigned int)*(_WORD *)(v1 + 32) <= 0xF0 )
    {
      v2 = (*(_WORD *)(v1 + 34) << 16 >> 19) & 0xFFFF;
      v3 = (signed __int16)(*(_WORD *)(v1 + 32) << 16 >> 19);
      if ( v3 != *(_WORD *)(v1 + 50) )
      {
        *(_WORD *)(v1 + 50) = *(_WORD *)(v1 + 32) << 16 >> 19;
        v4 = ((((unsigned int)v4000008 >> 8) & 0x1F) << 11) + 100663296;
        *(_WORD *)(2 * (32 * ((signed __int16)v2 - 2) + v3) + v4) = -4095;
        *(_WORD *)(2 * (32 * ((signed __int16)v2 - 1) + v3) + v4) = -4095;
        *(_WORD *)(2 * (32 * (signed __int16)v2 + v3) + v4) = -4095;
        *(_WORD *)(2 * (32 * ((signed __int16)v2 + 1) + v3) + v4) = -4095;
      }
    }
    v5 = *((_WORD *)&v7 + *(_WORD *)(v1 + 46)) + *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 32) = v5;
    if ( (unsigned int)((v5 + 15) << 16) > 0x10E0000 )
      FieldEffectStop(v1, 0x2Du);
  }
  return v8;
}

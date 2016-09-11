int sub_810FCE8()
{
  int v0; // r5@1
  int v2; // [sp+14h] [bp-4h]@0

  v0 = 0;
  if ( v2024EB2 <= 0x3E6u )
  {
    while ( (unsigned __int16)sub_810FCB0() > 4u )
    {
      if ( v0 == 8 || v2024EB2 - v2026AF8 <= 11 )
        return v2;
      sub_810FC18();
      v2026AF8 += 12;
      v0 = (v0 + 1) & 0xFF;
    }
    v2026AF8 = v2024EB2;
  }
  return v2;
}

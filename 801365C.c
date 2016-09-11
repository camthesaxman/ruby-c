int __fastcall sub_801365C(char a1)
{
  int v1; // r2@4
  unsigned int v2; // r1@4
  int v4; // [sp+1Ch] [bp-4h]@0

  v2024A60 = 0;
  if ( v2024A68 )
  {
    do
    {
      if ( a1 )
      {
        *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xFEu;
        *(_BYTE *)(16 * v2024A60 + 0x2024D28) &= 0xFDu;
      }
      else
      {
        v1 = 16 * v2024A60 + 33705256;
        v2 = 0;
        do
          *(_BYTE *)(v1 + v2++) = 0;
        while ( v2 <= 0xF );
        if ( *(_BYTE *)(28 * v2024A60 + 0x2024CBE) )
          --*(_BYTE *)(28 * v2024A60 + 0x2024CBE);
        if ( *(_BYTE *)(28 * v2024A60 + 0x2024CC1) )
        {
          if ( !--*(_BYTE *)(28 * v2024A60 + 0x2024CC1) )
            *(_DWORD *)(88 * v2024A60 + 0x2024AD0) &= 0xFFBFFFFF;
        }
      }
      if ( !*(_BYTE *)(28 * v2024A60 + 0x2024CB2) )
        *(_DWORD *)(88 * v2024A60 + 0x2024AD0) &= 0xFEFFFFFF;
      ++v2024A60;
    }
    while ( v2024A60 < (unsigned int)v2024A68 );
  }
  v2024C88 = 0;
  v2024C94 = 0;
  return v4;
}

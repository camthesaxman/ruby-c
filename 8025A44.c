_BOOL4 __fastcall sub_8025A44(unsigned __int8 a1)
{
  int v1; // r2@1
  int v2; // r3@2

  v1 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v2 = 0;
    while ( !(*(_DWORD *)(v2 + 33704656) & 0x70) || *(_BYTE *)(88 * a1 + 0x2024AA0) == 43 )
    {
      v2 += 88;
      if ( ++v1 >= v2024A68 )
        return v1 != v2024A68;
    }
    v2016003 = v1;
    if ( v2024C08 == 255 )
      v2024C08 = v1;
    else
      v2024D23 = v2024C08 != v1;
  }
  return v1 != v2024A68;
}

signed int sub_80170DC()
{
  char v0; // r0@8
  void *v1; // r0@10
  int v2; // r3@17

  v2024C6C |= 0x1000020u;
  if ( v2016110 )
  {
    if ( v2016110 != 1 )
      goto _08017380;
  }
  else
  {
    while ( v2016111 < (unsigned int)v2024A68 )
    {
      v2024A60 = v2016111;
      if ( v2024C0C & gBitTable[v2016111] )
      {
        ++v2016111;
      }
      else
      {
        ++v2016111;
        if ( *(_BYTE *)(v2024A60 + 0x2024DBC) )
        {
          v0 = *(_BYTE *)(v2024A60 + 0x2024DBC) - 1;
          *(_BYTE *)(v2024A60 + 0x2024DBC) = v0;
          if ( !v0 )
          {
            if ( *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024D23 = *(_WORD *)(2 * v2024A60 + 0x2024DD4) != 248;
              byte_30041C0[0] = -3;
              byte_30041C1 = 2;
              byte_30041C2 = *(_WORD *)(2 * v2024A60 + 0x2024DD4);
              byte_30041C3 = *(_WORD *)(2 * v2024A60 + 0x2024DD4) >> 8;
              byte_30041C4 = -1;
              v2024C08 = v2024A60;
              v2024C07 = *(_BYTE *)(v2024A60 + 0x2024DC0);
              v2024BEC = *(_DWORD *)(4 * v2024A60 + 0x2024DC4);
              *(_DWORD *)(20 * v2024A60 + 0x2024D6C) = 0xFFFF;
              v1 = &gUnknown_081D92D7;
              goto _08017364;
            }
          }
        }
      }
    }
    v2016110 = 1;
    v2016111 = 0;
  }
  if ( v2016111 >= (unsigned int)v2024A68 )
  {
_08017380:
    v2024C6C &= 0xFEFFFFDF;
    return 0;
  }
  while ( 1 )
  {
    v2024C07 = *(_BYTE *)(v2016111 + 0x2024A7A);
    v2024A60 = v2024C07;
    if ( !(v2024C0C & gBitTable[v2024C07]) )
      break;
    ++v2016111;
_08017374:
    if ( v2016111 >= (unsigned int)v2024A68 )
      goto _08017380;
  }
  ++v2016111;
  if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x20) )
    goto _08017374;
  byte_30041C0[0] = -3;
  byte_30041C1 = 1;
  byte_30041C2 = 1;
  byte_30041C3 = 1;
  byte_30041C4 = *(_BYTE *)(28 * v2024A60 + 0x2024CB7) & 0xF;
  byte_30041C5 = -1;
  v2 = *(_BYTE *)(28 * v2024A60 + 0x2024CB7);
  if ( v2 << 28 )
  {
    *(_BYTE *)(28 * v2024A60 + 0x2024CB7) = v2 & 0xF0 | ((v2 & 0xF) - 1) & 0xF;
    v1 = &gUnknown_081D921D;
  }
  else
  {
    *(_DWORD *)(4 * v2024A60 + 0x2024C98) &= 0xFFFFFFDF;
    v2024BEC = *(_WORD *)(88 * v2024A60 + 0x2024AA8);
    v1 = &gUnknown_081D9202;
  }
  v2024C10 = v1;
_08017364:
  b_call_bc_move_exec(v1);
  return 1;
}

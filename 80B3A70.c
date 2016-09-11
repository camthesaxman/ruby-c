int sub_80B3A70()
{
  int v0; // r0@1
  int v1; // r4@2
  int v2; // r0@3
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711;
  if ( v0 == (unsigned __int8)byte_3000710 )
  {
    sub_8072AB0((int)"ห้Ý่", 4, 104, 104, 0x30u, 0);
  }
  else
  {
    v1 = (unsigned __int8)byte_3000714;
    if ( byte_3000714 )
    {
      sub_8072AB0(*((_DWORD *)&unk_83EB6DC + 8 * *(_WORD *)(2 * v0 + dword_300070C)), 4, 104, 104, 0x30u, 0);
    }
    else
    {
      v2 = itemid_get_description(*(_WORD *)(2 * v0 + dword_300070C));
      sub_8072AB0(v2, 4, 104, 104, 0x30u, v1);
    }
  }
  return v4;
}

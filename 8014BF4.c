int sub_8014BF4()
{
  char v0; // r0@5
  char v1; // r1@5
  char *v2; // r1@13
  char v3; // r0@13
  int v5; // [sp+Ch] [bp-4h]@0

  v2024C07 = *(_BYTE *)(v2024A7E + 0x2024A7A);
  if ( !(v20239F8 & 2) )
  {
    if ( battle_side_get_owner(v2024C07) << 24 )
    {
      if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x400E000 )
      {
        v2024D23 = 4;
        v2024C10 = &gUnknown_081D8E3B;
        v2 = (char *)33704575;
        v3 = 10;
      }
      else
      {
        v2024A7E = v2024A68;
        v2 = (char *)33705254;
        v3 = 6;
      }
    }
    else
    {
      if ( sub_8014AB8(v2024C07) << 24 )
        return v5;
      *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFDFFFFFF;
      v2024D23 = 3;
      v2024C10 = &gUnknown_081D8E3B;
      v2 = (char *)33704575;
      v3 = 10;
    }
    *v2 = v3;
    return v5;
  }
  v2024A7E = v2024A68;
  v2024A60 = 0;
  if ( v2024A68 << 24 )
  {
    do
    {
      if ( battle_side_get_owner(v2024A60) << 24 )
      {
        if ( *(_BYTE *)(v2024A60 + 0x2024C18) == 3 )
        {
          v0 = v2024D26;
          v1 = 1;
          goto _08014C72;
        }
      }
      else if ( *(_BYTE *)(v2024A60 + 0x2024C18) == 3 )
      {
        v0 = v2024D26;
        v1 = 2;
_08014C72:
        v2024D26 = v0 | v1;
        goto _08014C76;
      }
_08014C76:
      ++v2024A60;
    }
    while ( v2024A60 < (unsigned int)v2024A68 );
  }
  v2024D26 |= 0x80u;
  return v5;
}

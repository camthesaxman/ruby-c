int __fastcall sub_80EF58C(signed int a1)
{
  unsigned int v1; // r1@7
  int v3; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 1 )
  {
    sub_80EF624(&unk_83E003E, &unk_83E0042, 16, 2);
  }
  else if ( a1 > 1 )
  {
    if ( a1 == 2 )
      sub_80EF624(&unk_83E0042, &unk_83E004A, 16, 2);
  }
  else if ( !a1 )
  {
    v1 = 0;
    do
    {
      *(_WORD *)(2 * v1 + 0x200CE52) = 0;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0x3D );
  }
  return v3;
}

signed int __fastcall castform_switch(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@8

  v1 = a1;
  v2 = 0;
  v3 = 88 * a1 + 33704576;
  if ( *(_WORD *)(88 * a1 + 0x2024A80) != 385
    || *(_BYTE *)(88 * a1 + 0x2024AA0) != 59
    || !*(_WORD *)(88 * a1 + 0x2024AA8) )
  {
    goto LABEL_31;
  }
  if ( (sub_8018324(19, 0, 13, 0) << 24 || sub_8018324(19, 0, 77, 0) << 24)
    && *(_BYTE *)(v3 + 33)
    && *(_BYTE *)(v3 + 34) )
  {
    *(_BYTE *)(v3 + 33) = 0;
    *(_BYTE *)(v3 + 34) = 0;
    return 1;
  }
  if ( (unsigned __int8)sub_8018324(19, 0, 13, 0) || sub_8018324(19, 0, 77, 0) << 24 )
  {
LABEL_31:
    result = 0;
  }
  else
  {
    if ( !(v2024DB8 & 0xE7) && *(_BYTE *)(88 * v1 + 0x2024AA1) && *(_BYTE *)(88 * v1 + 0x2024AA2) )
    {
      *(_BYTE *)(88 * v1 + 0x2024AA1) = 0;
      *(_BYTE *)(88 * v1 + 0x2024AA2) = 0;
      v2 = 1;
    }
    if ( v2024DB8 & 0x60 && *(_BYTE *)(88 * v1 + 0x2024AA1) != 10 && *(_BYTE *)(88 * v1 + 0x2024AA2) != 10 )
    {
      *(_BYTE *)(88 * v1 + 0x2024AA1) = 10;
      *(_BYTE *)(88 * v1 + 0x2024AA2) = 10;
      v2 = 2;
    }
    if ( v2024DB8 & 7 && *(_BYTE *)(88 * v1 + 0x2024AA1) != 11 && *(_BYTE *)(88 * v1 + 0x2024AA2) != 11 )
    {
      *(_BYTE *)(88 * v1 + 0x2024AA1) = 11;
      *(_BYTE *)(88 * v1 + 0x2024AA2) = 11;
      v2 = 3;
    }
    if ( v2024DB8 & 0x80 && *(_BYTE *)(88 * v1 + 0x2024AA1) != 15 && *(_BYTE *)(88 * v1 + 0x2024AA2) != 15 )
    {
      *(_BYTE *)(88 * v1 + 0x2024AA1) = 15;
      *(_BYTE *)(88 * v1 + 0x2024AA2) = 15;
      v2 = 4;
    }
    result = v2;
  }
  return result;
}

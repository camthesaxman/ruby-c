int __fastcall sub_8092E10(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int result; // r0@3
  _BYTE *v5; // r0@4

  v2 = a2;
  v3 = (*((_WORD *)&byte_3004B28[40 * a1] + gUnknown_083B5A7C[8 * v2 + 5])
      + *((_WORD *)&byte_3004B28[40 * a1] + gUnknown_083B5A7C[8 * v2 + 4])) & 0xFFFF;
  if ( a2 > 5u )
  {
def_8092E4C:
    result = 0;
  }
  else
  {
    switch ( a2 )
    {
      case 5u:
        v5 = &gUnknown_083B5A60;
        goto _08092EA4;
      case 4u:
        v5 = &gUnknown_083B5A62;
        goto _08092EA4;
      case 0u:
        if ( !v3 )
          goto _08092E96;
        result = (unsigned __int8)(*((_WORD *)&byte_3004B28[40 * a1] + gUnknown_083B5A7C[8 * a2 + 5])
                                 + *((_WORD *)&byte_3004B28[40 * a1] + gUnknown_083B5A7C[8 * a2 + 4]));
        break;
      case 1u:
        if ( v3 )
          result = (v3 - 1) & 0xFF;
        else
_08092E96:
          result = 255;
        break;
      case 2u:
      case 3u:
        v5 = &gUnknown_083B5A68;
_08092EA4:
        result = v5[v3];
        break;
      default:
        goto def_8092E4C;
    }
  }
  return result;
}

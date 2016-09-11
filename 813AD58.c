int __fastcall sub_813AD58(unsigned __int16 a1)
{
  unsigned __int16 v1; // r1@1
  unsigned int v2; // r0@1
  const char *v3; // r1@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1 - 65527;
  if ( v2 > 8 )
  {
def_813AD70:
    v3 = (const char *)itemid_get_description(v1);
  }
  else
  {
    switch ( v2 )
    {
      case 8u:
        v3 = (const char *)&gUnknown_0840E697;
        break;
      case 7u:
        v3 = (const char *)&gUnknown_0840FE2E;
        break;
      case 6u:
        v3 = "ÑİèÜØæÙë";
        break;
      case 5u:
        v3 = "Îãçç";
        break;
      case 4u:
        v3 = "ÎÜæÙë";
        break;
      case 3u:
        v3 = "ÎÜÙæÙ";
        break;
      case 2u:
        v3 = "ÎÜÕè´ç";
        break;
      case 1u:
        v3 = (const char *)&gUnknown_0840E8C7;
        break;
      case 0u:
        v3 = "Íëİè×Ü";
        break;
      default:
        goto def_813AD70;
    }
  }
  sub_8072AB0((int)v3, 8, 104, 104, 0x30u, 1);
  return v5;
}

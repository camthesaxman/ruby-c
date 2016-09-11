int sub_80A7420()
{
  const char *v0; // r0@7
  int v2; // [sp+4h] [bp-4h]@0

  if ( v203853C == 2 )
  {
    if ( v203853E <= 9u )
    {
      switch ( v203853E )
      {
        case 0u:
          sub_80A49AC(
            *(_WORD *)(4
                     * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559])
                     + dword_3005D24),
            v203853D);
          break;
        case 1u:
          v0 = "Íëİè×Ü";
          goto _080A74E6;
        case 2u:
          v0 = "ÑÜÕè";
          goto _080A74E6;
        case 3u:
          v0 = "Îãçç";
          goto _080A74E6;
        case 4u:
          v0 = "ÎÜæÙë";
          goto _080A74E6;
        case 5u:
          v0 = (const char *)&gUnknown_0840E8C7;
          goto _080A74E6;
        case 6u:
          v0 = (const char *)&gUnknown_0840E7F4;
          goto _080A74E6;
        case 7u:
          v0 = "¾ÙäãçİèÙØ";
          goto _080A74E6;
        case 8u:
          v0 = "ÎÜÙæÙ´ç";
_080A74E6:
          sub_80A4A98(v0, v203853D);
          break;
        case 9u:
          sub_80A4A98(&gUnknown_0840E849, v203853D);
          break;
        default:
          break;
      }
    }
    ++v203853D;
    if ( v203853D == 3 )
    {
      v203853C = 0;
      sub_80A7918();
    }
  }
  else if ( v203853C == 3 )
  {
    v203853C = 2;
  }
  return v2;
}

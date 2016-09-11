int __fastcall sub_8071B64(unsigned __int8 a1)
{
  int v1; // r5@1
  _WORD *v2; // r4@1
  unsigned int v3; // r0@2
  signed int v4; // r2@4
  signed int v5; // r3@4
  int v6; // r0@5
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( !(v202F38F & 0x80) )
  {
    v3 = *v2;
    if ( v3 <= 4 )
    {
      switch ( v3 )
      {
        case 0u:
          MenuDisplayMessageBox(v3);
          MenuPrint(&gUnknown_08411905, 2, 15);
          v4 = 16;
          v5 = 0;
          goto _08071BFA;
        case 1u:
          v6 = sub_8047A1C();
          sub_8125E2C(v6);
          goto _08071BFE;
        case 2u:
          if ( !(sub_8125E6C() << 24) )
            return v8;
          sub_8047A34();
          goto _08071BFE;
        case 3u:
          v4 = 0;
          v5 = 16;
_08071BFA:
          BeginNormalPaletteFade(-1, 0, v4, v5);
_08071BFE:
          ++*v2;
          break;
        case 4u:
          SetMainCallback2(dword_3001778);
          DestroyTask(v1);
          break;
        default:
          return v8;
      }
    }
  }
  return v8;
}

int __fastcall sub_80F27DC(int a1)
{
  unsigned int v1; // r0@3
  signed int v2; // r1@3
  signed int v3; // r1@8
  int v5; // [sp+0h] [bp-Ch]@3
  unsigned int v6; // [sp+4h] [bp-8h]@3
  int v7; // [sp+8h] [bp-4h]@17

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 <= 0xBu )
  {
    switch ( a1 )
    {
      case 0:
        v5 = 33569688;
        v1 = (v6 & 0xFFFF0000 | 0x600) & 0xFFFF;
        v2 = 0x10000;
        goto _080F2996;
      case 1:
        v5 = 33571224;
        v1 = (v6 & 0xFFFF0000 | 0x600) & 0xFFFF;
        v2 = 0x10000;
        goto _080F2996;
      case 3:
        v5 = 33572760;
        v1 = (v6 & 0xFFFF0000 | 0x600) & 0xFFFF;
        v2 = 0x10000;
        goto _080F2996;
      case 2:
        v5 = 33574296;
        v1 = (v6 & 0xFFFF0000 | 0x600) & 0xFFFF;
        v2 = 0x10000;
        goto _080F2996;
      case 4:
        v5 = 33575832;
        v1 = (v6 & 0xFFFF0000 | 0xC00) & 0xFFFF;
        v2 = 0x10000;
        goto _080F2996;
      case 5:
        v3 = 24472;
        goto _080F297E;
      case 6:
        v3 = 24984;
        goto _080F297E;
      case 8:
        v3 = 25496;
        goto _080F297E;
      case 9:
        v3 = 26008;
        goto _080F297E;
      case 11:
        v3 = 27032;
        goto _080F297E;
      case 10:
        v3 = 26520;
        goto _080F297E;
      case 7:
        v3 = 27544;
_080F297E:
        v5 = v3 + 0x2000000;
        v1 = (v6 & 0xFFFF0000 | 0x200) & 0xFFFF;
        v2 = 0x20000;
_080F2996:
        v6 = v1 | v2;
        LoadSpriteSheet((int)&v5);
        break;
      default:
        return v7;
    }
  }
  return v7;
}

int __fastcall GetMedicineItemEffectMessage(unsigned __int16 a1)
{
  unsigned int v1; // r0@1
  _BYTE *v2; // r0@11
  _BYTE *v3; // r1@11
  int v5; // [sp+0h] [bp-4h]@0

  v1 = (unsigned __int8)sub_8070E48(a1) - 3;
  if ( v1 > 0x12 )
  {
def_806FBEE:
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EF85);
  }
  else
  {
    switch ( v1 )
    {
      case 0u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F4DA);
        return v5;
      case 1u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F518);
        return v5;
      case 2u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F526);
        return v5;
      case 3u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F53E);
        return v5;
      case 4u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F4FB);
        return v5;
      case 5u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F5D7);
        return v5;
      case 6u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F5FA);
        return v5;
      case 8u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F57C);
        return v5;
      case 0xAu:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840EF72;
        goto _0806FD34;
      case 9u:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840F7C6;
        goto _0806FD34;
      case 0xEu:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840F7CD;
        goto _0806FD34;
      case 0xDu:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840F7E5;
        goto _0806FD34;
      case 0xBu:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840EF75;
        goto _0806FD34;
      case 0xCu:
        v2 = &gStringVar2;
        v3 = &gUnknown_0840EF7D;
_0806FD34:
        StringCopy(v2, v3);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F5C1);
        break;
      case 0x10u:
      case 0x11u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F591);
        break;
      case 0x12u:
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F553);
        break;
      default:
        goto def_806FBEE;
    }
  }
  return v5;
}

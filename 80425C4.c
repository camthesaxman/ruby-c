_BYTE *__fastcall sub_80425C4(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  _BYTE *v3; // r1@3

  v2 = a1;
  a2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    if ( a2 == 254 && !(sub_8042548(a1, 0xFEu) << 24) )
    {
      v3 = &gUnknown_0820C33F;
      return StringAppend(v2, v3);
    }
_08042600:
    v3 = &gUnknown_0820C341;
    return StringAppend(v2, v3);
  }
  if ( sub_8042548(a1, 0) << 24 )
    goto _08042600;
  v3 = &gUnknown_0820C33D;
  return StringAppend(v2, v3);
}

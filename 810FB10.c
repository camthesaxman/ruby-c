int __fastcall sub_810FB10(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@2
  __int16 v3; // r0@4

  v1 = a1;
  if ( (unsigned __int16)VarGet(16533) == 2 )
  {
    v2 = gUnknown_083F8404[v1];
    if ( (v2026AF6 & 0x7F) + v2 <= 19 )
    {
      v3 = v2026AF6 + v2;
      goto _0810FB7E;
    }
    if ( (sub_810FCB0() & 0xFFFFu) <= 2 )
    {
      sub_810FB9C();
      v3 = v2026AF6 & 0xFF80;
_0810FB7E:
      v2026AF6 = v3;
      return v2026AF6 & 0x7F;
    }
    v2026AF6 = v2026AF6 & 0xFF80 | 0x14;
  }
  return v2026AF6 & 0x7F;
}

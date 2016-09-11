int __fastcall sub_80540D0(signed __int16 *a1, _WORD *a2)
{
  signed __int16 *v2; // r6@1
  unsigned int v3; // r0@1
  signed __int16 v4; // r0@4
  int v5; // r0@8
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = *a1;
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        if ( v2029814 )
          v4 = 1;
        else
          v4 = 4;
        goto _0805415C;
      case 1u:
        *a2 = (unsigned __int16)Random() % 0x960u + 1200;
        v4 = 3;
        goto _0805415C;
      case 2u:
        *a2 = (unsigned __int16)Random() % 0x4B0u + 1200;
        v4 = 3;
        goto _0805415C;
      case 3u:
        v5 = *a2 - 1;
        *a2 = v5;
        if ( !(v5 << 16) )
        {
          sub_8054050();
          v4 = 2;
_0805415C:
          *v2 = v4;
        }
        break;
      default:
        return v7;
    }
  }
  return v7;
}

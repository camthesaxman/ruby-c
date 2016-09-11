int __fastcall sub_809AACC(int a1, unsigned __int8 a2, _WORD *a3, signed __int16 *a4)
{
  __int16 v4; // r5@1
  signed __int16 v5; // r0@5
  signed __int16 v6; // r1@10
  int v8; // [sp+Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v4 = a2;
  if ( (unsigned __int8)a1 <= 4u )
  {
    switch ( a1 )
    {
      case 0:
        *a3 = 24 * (a2 % 6u) + 100;
        *a4 = 24 * (a2 / 6u) + 32;
        return v8;
      case 1:
        if ( a2 )
        {
          if ( a2 == 6 )
          {
            *a3 = 152;
            v5 = 132;
          }
          else
          {
            *a3 = 152;
            v5 = 24 * (a2 - 1) + 4;
          }
        }
        else
        {
          *a3 = 104;
          v5 = 52;
        }
        goto _0809AB82;
      case 2:
        *a3 = 162;
        v5 = 12;
        goto _0809AB82;
      case 3:
        v6 = 14;
        if ( v20384E6 )
          v6 = 8;
        *a4 = v6;
        *a3 = 88 * v4 + 120;
        break;
      case 4:
        *a3 = 160;
        v5 = 96;
_0809AB82:
        *a4 = v5;
        break;
      default:
        return v8;
    }
  }
  return v8;
}

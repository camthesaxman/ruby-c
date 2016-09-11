signed int sub_80173A4()
{
  char v0; // r0@17
  signed int v2; // r9@5
  unsigned int v3; // r0@6
  signed int i; // r5@8
  int v5; // r4@9
  char v6; // r0@21
  int v7; // r2@24
  unsigned __int8 v8; // r1@29

  if ( !(v20239F8 & 0x80) )
  {
    v2 = 0x2000000;
    while ( 2 )
    {
      v3 = *(_BYTE *)(v2 + 90201);
      if ( v3 > 7 )
        goto def_8017410;
      switch ( v3 )
      {
        case 0u:
          *(_BYTE *)(v2 + 90202) = 0;
          ++*(_BYTE *)(v2 + 90201);
          for ( i = 0; i < v2024A68; ++i )
          {
            v5 = gBitTable[i];
            if ( v2024C0C & (unsigned __int8)v5 && !(sub_8018018((unsigned __int8)i, 6, 6) << 24) )
              v2024C0C &= ~(_BYTE)v5;
          }
          goto _08017490;
        case 1u:
_08017490:
          v2 = 0x2000000;
          while ( 1 )
          {
            v2024C08 = v201605A;
            v2024C09 = v201605A;
            if ( !*(_WORD *)(88 * v201605A + 0x2024AA8)
              && !(v2016113 & gBitTable[*(_WORD *)(2 * v201605A + 0x2024A6A)])
              && !(v2024C0C & gBitTable[v201605A]) )
            {
              break;
            }
            ++v201605A;
            if ( v201605A == v2024A68 )
            {
              v2016059 = 3;
              goto def_8017410;
            }
          }
          b_call_bc_move_exec(&gUnknown_081D8C72);
          v0 = 2;
          goto _080173E8;
        case 2u:
          sub_8015740(v2024C09);
          ++v201605A;
          if ( v201605A == v2024A68 )
            v6 = 3;
          else
            v6 = 1;
          goto _0801769C;
        case 3u:
          *(_BYTE *)(v2 + 90202) = 0;
          ++*(_BYTE *)(v2 + 90201);
          goto _0801759E;
        case 4u:
          goto _0801759E;
        case 5u:
          v8 = *(_BYTE *)(v2 + 90202) + 1;
          *(_BYTE *)(v2 + 90202) = v8;
          if ( v8 == v2024A68 )
            goto _08017612;
          *(_BYTE *)(v2 + 90201) = 4;
          goto def_8017410;
        case 6u:
          if ( (unsigned __int8)sub_8018324(9, 0, 0, 0)
            || sub_8018324(11, 0, 0, 0) << 24
            || (unsigned __int8)sub_801A02C(1, 0, 1)
            || sub_8018324(6, 0, 0, 0) << 24 )
          {
            return 1;
          }
          v6 = v2016059 + 1;
_0801769C:
          v2016059 = v6;
          v2 = 0x2000000;
          goto def_8017410;
        default:
          goto def_8017410;
      }
      do
      {
_0801759E:
        v2024C08 = v201605A;
        v2024C09 = v201605A;
        v7 = v201605A;
        if ( !*(_WORD *)(88 * v201605A + 0x2024AA8) && !(v2024C0C & gBitTable[v201605A]) )
        {
          b_call_bc_move_exec(&gUnknown_081D8C7B);
          v0 = 5;
_080173E8:
          v2016059 = v0;
          return 1;
        }
        ++v201605A;
      }
      while ( ((v7 + 1) & 0xFF) != v2024A68 );
_08017612:
      *(_BYTE *)(v2 + 90201) = 6;
def_8017410:
      if ( *(_BYTE *)(v2 + 90201) != 7 )
        continue;
      break;
    }
  }
  return 0;
}

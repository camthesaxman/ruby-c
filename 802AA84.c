int atkDE_asistattackselect()
{
  int v0; // r10@1
  int v1; // r2@3
  int v2; // r6@5
  int v3; // r4@5
  int v4; // r5@7
  int v5; // r9@7
  _WORD *v6; // r6@7
  int v7; // r7@8
  unsigned int v8; // r0@8
  unsigned int v9; // r4@8
  _BOOL4 v10; // r0@8
  int v11; // r1@8
  __int16 *v12; // r2@11
  int v13; // r0@12
  char *v15; // [sp+0h] [bp-28h]@1
  int v16; // [sp+4h] [bp-24h]@4
  int v17; // [sp+24h] [bp-4h]@0

  v0 = 0;
  v15 = (char *)&unk_3004360;
  if ( battle_get_per_side_status(v2024C07) & 1 )
    v15 = (char *)&unk_30045C0;
  v1 = 0;
  do
  {
    v16 = v1 + 1;
    if ( v1 != *(_WORD *)(2 * v2024C07 + 0x2024A6A) )
    {
      v2 = 100 * v1;
      v3 = (int)&v15[100 * v1];
      if ( GetMonData(&v15[100 * v1], 65) )
      {
        if ( GetMonData(v3, 65) != 412 )
        {
          v4 = 0;
          v5 = v2;
          v6 = (_WORD *)(2 * v0 + 33644580);
          do
          {
            v7 = 0;
            v8 = GetMonData(&v15[v5], v4 + 13) << 16;
            v9 = v8 >> 16;
            v10 = sub_802838C(SHIWORD(v8));
            v11 = v4 + 1;
            if ( !(v10 << 24) )
            {
              if ( (unsigned __int16)gUnknown_081FACFE[0] == 0xFFFF )
                goto _0802AB42;
              if ( v9 != (unsigned __int16)gUnknown_081FACFE[0] )
              {
                v12 = gUnknown_081FACFE;
                do
                {
                  ++v12;
                  ++v7;
                  v13 = (unsigned __int16)*v12;
                  if ( v13 == 0xFFFF )
                    break;
                }
                while ( v9 != v13 );
_0802AB42:
                if ( v9 )
                {
                  *v6 = v9;
                  ++v6;
                  ++v0;
                }
                goto _0802AB4E;
              }
              if ( (unsigned __int16)gUnknown_081FACFE[v7] == 0xFFFF )
                goto _0802AB42;
            }
_0802AB4E:
            ++v4;
          }
          while ( v11 <= 3 );
        }
      }
    }
    v1 = v16;
  }
  while ( v16 <= 5 );
  if ( v0 )
  {
    v2024C6C &= 0xFFFFFBFF;
    v2024BEA = *(_WORD *)(2 * (v0 * (unsigned __int8)Random(v2024C6C) >> 8) + 0x2016024);
    v2024C08 = sub_801B5C0(v2024BEA, 0);
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v17;
}

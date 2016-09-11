int atk1E_jumpifability()
{
  unsigned __int8 v0; // r5@1
  int v1; // r8@1
  int v2; // r7@1
  int v3; // r0@1
  int v4; // r4@2
  unsigned __int8 v5; // r4@3
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r4@5
  int v10; // [sp+18h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 2);
  v1 = *(_BYTE *)(v2024C10 + 2);
  v2 = *(_BYTE *)(v2024C10 + 3)
     + (*(_BYTE *)(v2024C10 + 4) << 8)
     + (*(_BYTE *)(v2024C10 + 5) << 16)
     + (*(_BYTE *)(v2024C10 + 6) << 24);
  v3 = *(_BYTE *)(v2024C10 + 1);
  if ( v3 != 8 )
  {
    if ( v3 == 9 )
    {
      v8 = (unsigned __int8)sub_8018324(0xCu, v2024C07, v0, 0, 0);
      if ( v8 )
      {
        v2024C06 = v0;
        v2024C10 = v2;
        v5 = v8 - 1;
        v6 = v5;
        v7 = v0;
        goto _0801FD80;
      }
    }
    else
    {
      LOBYTE(v6) = sub_8015150(*(_BYTE *)(v2024C10 + 1));
      v5 = v6;
      v7 = *(_BYTE *)(88 * (unsigned __int8)v6 + 0x2024AA0);
      if ( v7 == v1 )
      {
        v2024C06 = v7;
        v2024C10 = v2;
        v7 = (unsigned __int8)v7;
        v6 = (unsigned __int8)v6;
        goto _0801FD80;
      }
    }
_0801FDA0:
    v2024C10 += 7;
    return v10;
  }
  v4 = (unsigned __int8)sub_8018324(0xDu, v2024C07, v0, 0, 0);
  if ( !v4 )
    goto _0801FDA0;
  v2024C06 = v0;
  v2024C10 = v2;
  v5 = v4 - 1;
  v6 = v5;
  v7 = v0;
_0801FD80:
  sub_81074C4(v6, v7);
  v20160F8 = v5;
  return v10;
}

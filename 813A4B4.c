int __fastcall sub_813A4B4(unsigned __int8 a1)
{
  int v1; // r6@1
  _BYTE *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = (v2[2] + *v2) & 0xFF;
  sub_80F996C(0);
  sub_80F996C(1u);
  if ( *((_WORD *)v2 + 6) )
  {
    if ( *(_WORD *)(4 * v3 + 0x2025BCE) == 1 )
    {
      *((_WORD *)v2 + 3) = 1;
      sub_813A794(v1);
      return v5;
    }
    sub_813AD58(65532);
_0813A542:
    *((_WORD *)v2 + 3) = 1;
    MenuDrawTextWindow(6u, 8u);
    sub_80A418C(*((_WORD *)v2 + 3), 1, 8, 9u, 3u);
    dword_3004B20[10 * v1] = (int)sub_813A584;
    return v5;
  }
  if ( *(_WORD *)(4 * v3 + 0x2025BCE) != 1 )
  {
    sub_813AD58(65534);
    goto _0813A542;
  }
  *((_WORD *)v2 + 3) = 1;
  sub_813A6FC(v1);
  return v5;
}

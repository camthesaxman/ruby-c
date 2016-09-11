int __fastcall sub_80D0FD8(int a1)
{
  int v1; // r6@1
  _BYTE *v2; // r0@2
  int v3; // r5@4
  int v4; // r4@4
  unsigned __int8 v5; // r0@7
  unsigned __int8 v6; // r1@7
  int v7; // r4@9
  __int16 v9; // [sp+0h] [bp-18h]@1
  __int16 v10; // [sp+2h] [bp-16h]@1
  int v11; // [sp+14h] [bp-4h]@12

  v1 = a1;
  v9 = 0;
  v10 = 0;
  if ( word_3004B04 )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  v3 = *v2;
  v4 = (unsigned __int8)word_3004B06 ^ 1;
  if ( battle_type_is_double() << 24 && b_side_obj__get_some_boolean(v3 ^ 2) << 24 )
  {
    sub_807A3FC(v3, v4, &v9, &v10);
    if ( v4 )
    {
      v5 = v3;
      v6 = 2;
    }
    else
    {
      v5 = v3;
      v6 = 0;
    }
    v7 = (unsigned __int8)sub_8077ABC(v5, v6);
    if ( battle_side_get_owner(v3) << 24 )
      word_3004B00[0] -= v9 - v7 - word_3004B00[0];
    else
      word_3004B00[0] = v9 - v7;
  }
  *(_DWORD *)(v1 + 28) = sub_80793C4;
  call_via_r1(v1, sub_80793C4);
  return v11;
}

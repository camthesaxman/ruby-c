int __fastcall sAA_create_new_sprite(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@1
  unsigned __int8 v3; // r8@1
  unsigned __int8 v4; // r6@1
  unsigned __int16 v5; // r0@1
  __int16 v6; // r4@1
  unsigned __int16 v7; // r0@1
  __int16 v8; // r3@1
  unsigned __int8 *v9; // r0@1
  unsigned __int8 v10; // r2@1
  unsigned __int8 v11; // r1@1

  v1 = a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v5 = script_read_halfword(v1);
  v6 = VarGet(v5);
  v7 = script_read_halfword(v1);
  v8 = VarGet(v7);
  v9 = *(unsigned __int8 **)(v1 + 8);
  v10 = *v9++;
  *(_DWORD *)(v1 + 8) = v9;
  v11 = *v9;
  *(_DWORD *)(v1 + 8) = v9 + 1;
  sub_805B410(v3, v4, v6, v8, v10, v11);
  return 0;
}

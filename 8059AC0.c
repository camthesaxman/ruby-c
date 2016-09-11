int __fastcall InitPlayerAvatar(__int16 a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int16 v4; // r4@1
  __int16 v5; // r5@1
  int v6; // r9@1
  unsigned __int8 v7; // r8@1
  int v8; // r1@1
  unsigned __int8 v9; // r0@1
  int *v10; // r4@1
  char v12; // [sp+0h] [bp-30h]@1
  char v13; // [sp+1h] [bp-2Fh]@1
  __int16 v14; // [sp+4h] [bp-2Ch]@1
  __int16 v15; // [sp+6h] [bp-2Ah]@1
  char v16; // [sp+8h] [bp-28h]@1
  char v17; // [sp+9h] [bp-27h]@1
  unsigned __int8 v18; // [sp+Ah] [bp-26h]@1
  __int16 v19; // [sp+Ch] [bp-24h]@1
  __int16 v20; // [sp+Eh] [bp-22h]@1
  int v21; // [sp+10h] [bp-20h]@1
  __int16 v22; // [sp+14h] [bp-1Ch]@1
  int v23; // [sp+2Ch] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v12 = -1;
  v13 = GetPlayerAvatarGraphicsIdByStateIdAndGender(0, a4);
  v14 = v4 - 7;
  v15 = v5 - 7;
  v16 = 0;
  v17 = 11;
  v8 = v18;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v9 = SpawnSpecialFieldObject(&v12, v8, &v12, 0, *(_DWORD *)&v12, *(_DWORD *)&v14);
  LOBYTE(v5) = v9;
  v10 = &dword_30048A0[9 * v9];
  *((_BYTE *)v10 + 2) |= 1u;
  *((_BYTE *)v10 + 27) = sub_8126B54();
  FieldObjectTurn(v10, v6);
  ClearPlayerAvatarInfo();
  v202E85A = 0;
  v202E85B = 0;
  v202E85D = v5;
  v202E85C = *((_BYTE *)v10 + 4);
  v202E85F = v7;
  SetPlayerAvatarStateMask(0x21u);
  return v23;
}

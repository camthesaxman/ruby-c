int __fastcall dp11b_obj_instanciate(unsigned __int8 a1, unsigned __int8 a2, char a3, char a4)
{
  int v4; // r4@1
  int v5; // r8@1
  char v6; // r9@1
  char v7; // r10@1
  int v8; // r2@2
  int v9; // r1@2
  signed int v10; // r0@2
  int v11; // r6@4
  int v12; // r5@5
  int v13; // r7@6
  int v14; // r0@6
  char *v15; // r2@6
  int v16; // r3@6
  char *v17; // r0@6
  signed __int16 v18; // r1@6
  int v19; // r0@7
  int v20; // r1@8
  int v21; // r0@8
  int v23; // [sp+1Ch] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a2 )
  {
    v8 = 2 * a1;
    v9 = *(_BYTE *)(12 * a1 + 0x2017810);
    v10 = 2;
  }
  else
  {
    v8 = 2 * a1;
    v9 = *(_BYTE *)(12 * a1 + 0x2017810);
    v10 = 4;
  }
  v11 = v8;
  if ( !(v10 & v9) )
  {
    v12 = object_new_hidden_with_callback(objc_dp11b_pingpong) & 0xFF;
    if ( v5 == 1 )
    {
      v13 = (unsigned __int8)byte_3004340[v4];
      v14 = 4 * (v11 + v4) + 33650704;
      *(_BYTE *)(v14 + 2) = v12;
      *(_BYTE *)v14 = *(_BYTE *)(4 * (v11 + v4) + 0x2017810) | 2;
      v15 = gSprites;
      v16 = 16 * v12;
      v17 = &gSprites[68 * v12];
      v18 = 128;
    }
    else
    {
      v13 = *(_BYTE *)(v4 + 33704928);
      v19 = 4 * (v11 + v4) + 33650704;
      *(_BYTE *)(v19 + 3) = v12;
      *(_BYTE *)v19 = *(_BYTE *)(4 * (v11 + v4) + 0x2017810) | 4;
      v15 = gSprites;
      v16 = 16 * v12;
      v17 = &gSprites[68 * v12];
      v18 = 192;
    }
    *((_WORD *)v17 + 23) = v18;
    v20 = (int)&v15[4 * (v16 + v12)];
    *(_WORD *)(v20 + 48) = v6;
    *(_WORD *)(v20 + 50) = v7;
    *(_WORD *)(v20 + 52) = v13;
    *(_WORD *)(v20 + 54) = v5;
    v21 = (int)&v15[68 * v13];
    *(_WORD *)(v21 + 36) = 0;
    *(_WORD *)(v21 + 38) = 0;
  }
  return v23;
}

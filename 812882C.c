int __fastcall sub_812882C(int a1, unsigned __int8 a2, char a3)
{
  int v3; // r6@1
  unsigned int v4; // r7@1
  int *v5; // r4@2
  char *v6; // r5@3
  int v7; // r2@3
  int v8; // r0@3
  int v9; // r4@3
  signed int v10; // r1@3
  signed int v11; // r2@3
  __int16 v12; // r3@5
  int v13; // r0@5
  int v14; // r2@5
  signed int v15; // r3@5
  unsigned int v16; // r1@8
  int v18; // [sp+10h] [bp-4h]@0

  v3 = a1;
  SetObjectSubpriorityByZCoord(a2, a1, a3);
  v4 = 0;
  while ( 1 )
  {
    v5 = &dword_30048A0[9 * v4];
    if ( *(_BYTE *)v5 << 31 )
    {
      GetFieldObjectGraphicsInfo(*((_BYTE *)v5 + 5));
      v6 = &gSprites[68 * *((_BYTE *)v5 + 4)];
      v7 = *(_BYTE *)(v3 + 40);
      v8 = *(_WORD *)(v3 + 32);
      v9 = (v8 - v7) & 0xFFFF;
      v10 = (signed __int16)(v8 + v7);
      v11 = *((_WORD *)v6 + 16);
      if ( v10 < v11 && (signed __int16)v9 > v11 )
      {
        v12 = v6[41];
        v13 = (signed __int16)(*(_WORD *)(v3 + 34) - *(_BYTE *)(v3 + 41));
        v14 = (signed __int16)(*((_WORD *)v6 + 17) + v12);
        v15 = (signed __int16)(v13 + v12);
        if ( ((signed __int16)v14 < v15 || v14 < v13) && *((_WORD *)v6 + 17) > v15 )
        {
          v16 = (unsigned __int8)v6[67];
          if ( *(_BYTE *)(v3 + 67) <= v16 )
            break;
        }
      }
    }
    v4 = (v4 + 1) & 0xFF;
    if ( v4 > 0xF )
      return v18;
  }
  *(_BYTE *)(v3 + 67) = v16 + 2;
  return v18;
}

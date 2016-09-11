// local variable allocation has failed, the output may be wrong!
int __fastcall sub_80A0C80(int a1, char a2, unsigned __int8 a3)
{
  int v3; // r4@1
  char v4; // r10@1
  signed int v5; // r9@1
  int v6; // r8@1
  int v7; // r2@1
  unsigned int v8; // r5@1 OVERLAPPED
  signed __int64 v9; // r6@1 OVERLAPPED
  int v10; // r2@1
  unsigned __int16 v11; // r0@1
  int v12; // r2@2
  int v13; // r1@2
  int v14; // r0@2
  unsigned int v15; // r12@5
  int v16; // r1@7
  unsigned __int8 v18; // [sp+0h] [bp-24h]@1
  int v19; // [sp+20h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v18 = a3;
  v5 = 0;
  HIDWORD(v9) = 0;
  v6 = GetMonData(a1, 25, a3);
  *(_QWORD *)&v8 = (unsigned __int8)GetMonData(v3, 56, v7);
  v11 = GetMonData(v3, 11, v10);
  if ( v8 <= 0x63 )
  {
    v12 = 404 * *((_BYTE *)&gBaseStats + 28 * v11 + 19);
    v13 = *(_DWORD *)((char *)&gExperienceTables[v8 + 1] + v12);
    v5 = v13 - v6;
    v14 = *(_DWORD *)((char *)&gExperienceTables[v8] + v12);
    v9 = ((v6 - v14) << 6) / (unsigned int)(v13 - v14);
    if ( !(_DWORD)v9 && v6 != v14 )
      v9 = 1LL;
  }
  ConvertIntToDecimalString(&gStringVar1, v5);
  sub_8072B4C(&gStringVar1, v4 + 6, v18);
  v15 = 0;
  do
  {
    if ( v9 <= 7 )
      v16 = ((unsigned __int64)(v9 % 8) + 8290) & 0xFFFF;
    else
      LOWORD(v16) = 8298;
    *(_WORD *)(2 * v15 + 0x6004CAA) = v16;
    v9 -= 8LL;
    if ( v9 < 0 )
      v9 = 0LL;
    v15 = (v15 + 1) & 0xFF;
  }
  while ( v15 <= 7 );
  return v19;
}

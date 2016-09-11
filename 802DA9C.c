int __fastcall sub_802DA9C(unsigned __int8 a1)
{
  int *v1; // r8@1
  int *v2; // r2@1
  int v3; // r9@1
  int v4; // r10@1
  char *v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r3@1
  int v9; // r0@1
  int v11; // [sp+1Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  v4 = *((_BYTE *)v1 + 12);
  v5 = (char *)&unk_3004360 + 100 * *((_BYTE *)v2 + 8);
  v6 = (unsigned __int8)GetMonData(v5, 56);
  v7 = (unsigned __int16)GetMonData(v5, 11);
  v8 = GetMonData(v5, 25);
  v9 = 404 * *((_BYTE *)&gBaseStats + 28 * v7 + 19);
  sub_8043D84(
    v4,
    (unsigned __int8)byte_3004340[v4],
    *(_DWORD *)((char *)&gExperienceTables[v6 + 1] + v9) - *(_DWORD *)((char *)&gExperienceTables[v6] + v9),
    v8 - *(_DWORD *)((char *)&gExperienceTables[v6] + v9));
  audio_play(33);
  *v1 = (int)sub_802DB6C;
  return v11;
}

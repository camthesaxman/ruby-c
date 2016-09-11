int sub_804C1A8()
{
  int v0; // r0@2
  char *v1; // r4@3
  int v3; // [sp+0h] [bp-20h]@2
  int v4; // [sp+1Ch] [bp-4h]@4

  if ( *(_BYTE *)(dword_3004828 + 286) )
  {
    v0 = GetMultiplayerId();
    StringCopy(&gStringVar1, (_BYTE *)&unk_3002978 + 28 * (((v0 << 24) ^ 0x1000000u) >> 24));
    GetMonData((int)&unk_30045C0 + 100 * (v20297D9 % 6u), 2, (int)&v3);
    StringCopy10((int)&gStringVar3, (int)&v3);
    GetMonData((int)&dword_3004360[25 * v20297D8], 2, (int)&v3);
    StringCopy10((int)&gStringVar2, (int)&v3);
  }
  else
  {
    v1 = (char *)&gIngameTrades + 60 * v202E8CC;
    StringCopy(&gStringVar1, v1 + 43);
    StringCopy10((int)&gStringVar3, (int)v1);
    GetMonData((int)&dword_3004360[25 * v202E8CE], 2, (int)&v3);
    StringCopy10((int)&gStringVar2, (int)&v3);
  }
  return v4;
}

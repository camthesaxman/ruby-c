int __fastcall sub_804D948(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r2@1
  char *v3; // r5@1
  unsigned __int8 v4; // r0@1
  int v5; // ST04_4@1
  int v6; // ST0C_4@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r3@1
  char v11; // [sp+10h] [bp-3Ch]@3
  int v12; // [sp+14h] [bp-38h]@3
  int v13; // [sp+18h] [bp-34h]@3
  int v14; // [sp+1Ch] [bp-30h]@3
  int v15; // [sp+20h] [bp-2Ch]@3
  int v16; // [sp+24h] [bp-28h]@3
  int v17; // [sp+28h] [bp-24h]@3
  int v18; // [sp+2Ch] [bp-20h]@3
  int v19; // [sp+30h] [bp-1Ch]@3
  char v20; // [sp+34h] [bp-18h]@1
  char v21; // [sp+35h] [bp-17h]@1
  int v22; // [sp+48h] [bp-4h]@5

  v2 = 60 * a2;
  v3 = (char *)&gIngameTrades + v2;
  v4 = GetMonData((int)&dword_3004360[25 * a1], 56, v2);
  v20 = -2;
  v5 = *((_DWORD *)v3 + 9);
  v6 = *((_DWORD *)v3 + 6);
  CreateMon((int)&unk_30045C0, *((_WORD *)v3 + 6), v4, 0x20u);
  SetMonData((int)&unk_30045C0, 39, (int)(v3 + 14));
  SetMonData((int)&unk_30045C0, 40, (int)(v3 + 15));
  SetMonData((int)&unk_30045C0, 41, (int)(v3 + 16));
  SetMonData((int)&unk_30045C0, 42, (int)(v3 + 17));
  SetMonData((int)&unk_30045C0, 43, (int)(v3 + 18));
  SetMonData((int)&unk_30045C0, 44, (int)(v3 + 19));
  SetMonData((int)&unk_30045C0, 2, (int)v3);
  SetMonData((int)&unk_30045C0, 7, (int)(v3 + 43));
  SetMonData((int)&unk_30045C0, 49, (int)(v3 + 54));
  SetMonData((int)&unk_30045C0, 46, (int)(v3 + 20));
  SetMonData((int)&unk_30045C0, 23, (int)(v3 + 29));
  SetMonData((int)&unk_30045C0, 24, (int)(v3 + 30));
  SetMonData((int)&unk_30045C0, 22, (int)(v3 + 28));
  SetMonData((int)&unk_30045C0, 33, (int)(v3 + 31));
  SetMonData((int)&unk_30045C0, 47, (int)(v3 + 32));
  SetMonData((int)&unk_30045C0, 48, (int)(v3 + 55));
  SetMonData((int)&unk_30045C0, 35, (int)&v20);
  v21 = 0;
  if ( *((_WORD *)v3 + 20) )
  {
    if ( itemid_is_mail(*((_WORD *)v3 + 20), v7, v8, v9) << 24 )
    {
      sub_804DAD4(&v11, v3);
      v2029700 = *(_DWORD *)&v11;
      v2029704 = v12;
      v2029708 = v13;
      v202970C = v14;
      v2029710 = v15;
      v2029714 = v16;
      v2029718 = v17;
      v202971C = v18;
      v2029720 = v19;
      SetMonData((int)&unk_30045C0, 64, (int)&v21);
      SetMonData((int)&unk_30045C0, 12, (int)(v3 + 40));
    }
    else
    {
      SetMonData((int)&unk_30045C0, 12, (int)(v3 + 40));
    }
  }
  CalculateMonStats((int)&unk_30045C0);
  return v22;
}

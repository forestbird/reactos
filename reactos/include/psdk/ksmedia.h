/*
    KS Media
    (c) Andrew Greenwood, 2007.

    Please see COPYING in the top level directory for license information.
*/

#ifndef KSMEDIA_H
#define KSMEDIA_H

#include <ks.h>

/*
    KS CATEGORIES
*/

#define EXTRACT_WAVEFORMATEX_ID(Guid)\
    (USHORT)((Guid)->Data1)

/* Audio device (as presented by sysaudio) */

#define STATIC_KSCATEGORY_AUDIO_DEVICE \
    0xFBF6F530L, 0x07B9, 0x11D2, {0xA7, 0x1E, 0x00, 0x00, 0xF8, 0x00, 0x47, 0x88}
DEFINE_GUIDSTRUCT("FBF6F530-07B9-11D2-A71E-0000F8004788", KSCATEGORY_AUDIO_DEVICE);
#define KSCATEGORY_AUDIO_DEVICE DEFINE_GUIDNAMED(KSCATEGORY_AUDIO_DEVICE)

/* video */
#define STATIC_PINNAME_VIDEO_CAPTURE \
    0xfb6c4281, 0x353, 0x11d1, 0x90, 0x5f, 0x0, 0x0, 0xc0, 0xcc, 0x16, 0xba
#define STATIC_PINNAME_CAPTURE STATIC_PINNAME_VIDEO_CAPTURE
DEFINE_GUIDSTRUCT("FB6C4281-0353-11d1-905F-0000C0CC16BA", PINNAME_VIDEO_CAPTURE);
#define PINNAME_VIDEO_CAPTURE DEFINE_GUIDNAMED(PINNAME_VIDEO_CAPTURE)
#define PINNAME_CAPTURE PINNAME_VIDEO_CAPTURE

/* Preferred devices */

#define STATIC_KSCATEGORY_PREFERRED_WAVEOUT_DEVICE \
    0xD6C5066EL, 0x72C1, 0x11D2, {0x97, 0x55, 0x00, 0x00, 0xF8, 0x00, 0x47, 0x88}
DEFINE_GUIDSTRUCT("D6C5066E-72C1-11D2-9755-0000F8004788", KSCATEGORY_PREFERRED_WAVEOUT_DEVICE);
#define KSCATEGORY_PREFERRED_WAVEOUT_DEVICE DEFINE_GUIDNAMED(KSCATEGORY_PREFERRED_WAVEOUT_DEVICE)

#define STATIC_KSCATEGORY_PREFERRED_WAVEIN_DEVICE \
    0xD6C50671L, 0x72C1, 0x11D2, {0x97, 0x55, 0x00, 0x00, 0xF8, 0x00, 0x47, 0x88}
DEFINE_GUIDSTRUCT("D6C50671-72C1-11D2-9755-0000F8004788", KSCATEGORY_PREFERRED_WAVEIN_DEVICE);
#define KSCATEGORY_PREFERRED_WAVEIN_DEVICE DEFINE_GUIDNAMED(KSCATEGORY_PREFERRED_WAVEIN_DEVICE)

#define STATIC_KSCATEGORY_PREFERRED_MIDIOUT_DEVICE \
    0xD6C50674L, 0x72C1, 0x11D2, {0x97, 0x55, 0x00, 0x00, 0xF8, 0x00, 0x47, 0x88}
DEFINE_GUIDSTRUCT("D6C50674-72C1-11D2-9755-0000F8004788", KSCATEGORY_PREFERRED_MIDIOUT_DEVICE);
#define KSCATEGORY_PREFERRED_MIDIOUT_DEVICE DEFINE_GUIDNAMED(KSCATEGORY_PREFERRED_MIDIOUT_DEVICE)


/* Media type categories */

#define STATIC_KSCATEGORY_AUDIO \
    0x6994AD04L, 0x93EF, 0x11D0, {0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96}
DEFINE_GUIDSTRUCT("6994AD04-93EF-11D0-A3CC-00A0C9223196", KSCATEGORY_AUDIO);
#define KSCATEGORY_AUDIO DEFINE_GUIDNAMED(KSCATEGORY_AUDIO)

#define STATIC_KSCATEGORY_VIDEO \
    0x6994AD05L, 0x93EF, 0x11D0, {0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96}
DEFINE_GUIDSTRUCT("6994AD05-93EF-11D0-A3CC-00A0C9223196", KSCATEGORY_VIDEO);
#define KSCATEGORY_VIDEO DEFINE_GUIDNAMED(KSCATEGORY_VIDEO)

#define STATIC_KSCATEGORY_TEXT \
    0x6994AD06L, 0x93EF, 0x11D0, {0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96}
DEFINE_GUIDSTRUCT("6994AD06-93EF-11D0-A3CC-00A0C9223196", KSCATEGORY_TEXT);
#define KSCATEGORY_TEXT DEFINE_GUIDNAMED(KSCATEGORY_TEXT)

#define STATIC_KSCATEGORY_NETWORK \
    0x67C9CC3CL, 0x69C4, 0x11D2, {0x87, 0x59, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96}
DEFINE_GUIDSTRUCT("67C9CC3C-69C4-11D2-8759-00A0C9223196", KSCATEGORY_NETWORK);
#define KSCATEGORY_NETWORK DEFINE_GUIDNAMED(KSCATEGORY_NETWORK)

#define STATIC_KSINTERFACESETID_Media \
    0x3A13EB40L, 0x30A7, 0x11D0, {0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00}
DEFINE_GUIDSTRUCT("3A13EB40-30A7-11D0-A5D6-28DB04C10000", KSINTERFACESETID_Media);
#define KSINTERFACESETID_Media DEFINE_GUIDNAMED(KSINTERFACESETID_Media)

/* ... */

#define STATIC_KSCATEGORY_TOPOLOGY \
    0xDDA54A40L, 0x1E4C, 0x11D1, {0xA0, 0x50, 0x40, 0x57, 0x05, 0xC1, 0x00, 0x00}
DEFINE_GUIDSTRUCT("DDA54A40-1E4C-11D1-A050-405705C10000", KSCATEGORY_TOPOLOGY);
#define KSCATEGORY_TOPOLOGY DEFINE_GUIDNAMED(KSCATEGORY_TOPOLOGY)

#define STATIC_KSCATEGORY_VIRTUAL \
    0x3503EAC4L, 0x1F26, 0x11D1, {0x8A, 0xB0, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96}
DEFINE_GUIDSTRUCT("3503EAC4-1F26-11D1-8AB0-00A0C9223196", KSCATEGORY_VIRTUAL);
#define KSCATEGORY_VIRTUAL DEFINE_GUIDNAMED(KSCATEGORY_VIRTUAL)

#define STATIC_KSCATEGORY_ACOUSTIC_ECHO_CANCEL \
    0xBF963D80L, 0xC559, 0x11D0, {0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1}
DEFINE_GUIDSTRUCT("BF963D80-C559-11D0-8A2B-00A0C9255AC1", KSCATEGORY_ACOUSTIC_ECHO_CANCEL);
#define KSCATEGORY_ACOUSTIC_ECHO_CANCEL DEFINE_GUIDNAMED(KSCATEGORY_ACOUSTIC_ECHO_CANCEL)


/* Component-specific */

#define STATIC_KSCATEGORY_SYSAUDIO \
    0xA7C7A5B1L, 0x5AF3, 0x11D1, {0x9C, 0xED, 0x00, 0xA0, 0x24, 0xBF, 0x04, 0x07}
DEFINE_GUIDSTRUCT("A7C7A5B1-5AF3-11D1-9CED-00A024BF0407", KSCATEGORY_SYSAUDIO);
#define KSCATEGORY_SYSAUDIO DEFINE_GUIDNAMED(KSCATEGORY_SYSAUDIO)

#define STATIC_KSCATEGORY_WDMAUD \
    0x3E227E76L, 0x690D, 0x11D2, {0x81, 0x61, 0x00, 0x00, 0xF8, 0x77, 0x5B, 0xF1}
DEFINE_GUIDSTRUCT("3E227E76-690D-11D2-8161-0000F8775BF1", KSCATEGORY_WDMAUD);
#define KSCATEGORY_WDMAUD DEFINE_GUIDNAMED(KSCATEGORY_WDMAUD)

#define STATIC_KSCATEGORY_AUDIO_GFX \
    0x9BAF9572L, 0x340C, 0x11D3, {0xAB, 0xDC, 0x00, 0xA0, 0xC9, 0x0A, 0xB1, 0x6F}
DEFINE_GUIDSTRUCT("9BAF9572-340C-11D3-ABDC-00A0C90AB16F", KSCATEGORY_AUDIO_GFX);
#define KSCATEGORY_AUDIO_GFX DEFINE_GUIDNAMED(KSCATEGORY_AUDIO_GFX)

#define STATIC_KSCATEGORY_AUDIO_SPLITTER \
    0x9EA331FAL, 0xB91B, 0x45F8, {0x92, 0x85, 0xBD, 0x2B, 0xC7, 0x7A, 0xFC, 0xDE}
DEFINE_GUIDSTRUCT("9EA331FA-B91B-45F8-9285-BD2BC77AFCDE", KSCATEGORY_AUDIO_SPLITTER);
#define KSCATEGORY_AUDIO_SPLITTER DEFINE_GUIDNAMED(KSCATEGORY_AUDIO_SPLITTER)

#define STATIC_KSCATEGORY_SYNTHESIZER STATIC_KSNODETYPE_SYNTHESIZER
#define KSCATEGORY_SYNTHESIZER KSNODETYPE_SYNTHESIZER

#define STATIC_KSCATEGORY_DRM_DESCRAMBLE STATIC_KSNODETYPE_DRM_DESCRAMBLE
#define KSCATEGORY_DRM_DESCRAMBLE KSNODETYPE_DRM_DESCRAMBLE

/*
    Nodes
*/

#define STATIC_KSNODETYPE_ADC\
    0x4D837FE0L, 0xC555, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("4D837FE0-C555-11D0-8A2B-00A0C9255AC1", KSNODETYPE_ADC);
#define KSNODETYPE_ADC DEFINE_GUIDNAMED(KSNODETYPE_ADC)

#define STATIC_KSNODETYPE_AGC\
    0xE88C9BA0L, 0xC557, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("E88C9BA0-C557-11D0-8A2B-00A0C9255AC1", KSNODETYPE_AGC);
#define KSNODETYPE_AGC DEFINE_GUIDNAMED(KSNODETYPE_AGC)

#define STATIC_KSNODETYPE_3D_EFFECTS\
    0x55515860L, 0xC559, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("55515860-C559-11D0-8A2B-00A0C9255AC1", KSNODETYPE_3D_EFFECTS);
#define KSNODETYPE_3D_EFFECTS DEFINE_GUIDNAMED(KSNODETYPE_3D_EFFECTS)

#define STATIC_KSNODETYPE_SUPERMIX\
    0xE573ADC0L, 0xC555, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("E573ADC0-C555-11D0-8A2B-00A0C9255AC1", KSNODETYPE_SUPERMIX);
#define KSNODETYPE_SUPERMIX DEFINE_GUIDNAMED(KSNODETYPE_SUPERMIX)

#define STATIC_KSNODETYPE_SRC\
    0x9DB7B9E0L, 0xC555, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("9DB7B9E0-C555-11D0-8A2B-00A0C9255AC1", KSNODETYPE_SRC);
#define KSNODETYPE_SRC DEFINE_GUIDNAMED(KSNODETYPE_SRC)

#define STATIC_KSNODETYPE_DAC\
    0x507AE360L, 0xC554, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("507AE360-C554-11D0-8A2B-00A0C9255AC1", KSNODETYPE_DAC);
#define KSNODETYPE_DAC DEFINE_GUIDNAMED(KSNODETYPE_DAC)

#define STATIC_KSNODETYPE_SPDIF_INTERFACE\
    DEFINE_USB_TERMINAL_GUID(0x0605)
DEFINE_GUIDSTRUCT("DFF21FE5-F70F-11D0-B917-00A0C9223196", KSNODETYPE_SPDIF_INTERFACE);
#define KSNODETYPE_SPDIF_INTERFACE DEFINE_GUIDNAMED(KSNODETYPE_SPDIF_INTERFACE)

#define STATIC_KSNODETYPE_MICROPHONE\
    DEFINE_USB_TERMINAL_GUID(0x0201)
DEFINE_GUIDSTRUCT("DFF21BE1-F70F-11D0-B917-00A0C9223196", KSNODETYPE_MICROPHONE);
#define KSNODETYPE_MICROPHONE DEFINE_GUIDNAMED(KSNODETYPE_MICROPHONE)

#define STATIC_KSNODETYPE_CD_PLAYER\
    DEFINE_USB_TERMINAL_GUID(0x0703)
DEFINE_GUIDSTRUCT("DFF220E3-F70F-11D0-B917-00A0C9223196", KSNODETYPE_CD_PLAYER);
#define KSNODETYPE_CD_PLAYER DEFINE_GUIDNAMED(KSNODETYPE_CD_PLAYER)

#define STATIC_KSNODETYPE_CHORUS\
    0x20173F20L, 0xC559, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("20173F20-C559-11D0-8A2B-00A0C9255AC1", KSNODETYPE_CHORUS);
#define KSNODETYPE_CHORUS DEFINE_GUIDNAMED(KSNODETYPE_CHORUS)

#define STATIC_KSNODETYPE_REVERB\
    0xEF0328E0L, 0xC558, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("EF0328E0-C558-11D0-8A2B-00A0C9255AC1", KSNODETYPE_REVERB);
#define KSNODETYPE_REVERB DEFINE_GUIDNAMED(KSNODETYPE_REVERB)


#define STATIC_KSNODETYPE_LINE_CONNECTOR\
    DEFINE_USB_TERMINAL_GUID(0x0603)
DEFINE_GUIDSTRUCT("DFF21FE3-F70F-11D0-B917-00A0C9223196", KSNODETYPE_LINE_CONNECTOR);
#define KSNODETYPE_LINE_CONNECTOR DEFINE_GUIDNAMED(KSNODETYPE_LINE_CONNECTOR)

#define STATIC_KSNODETYPE_ANALOG_CONNECTOR\
    DEFINE_USB_TERMINAL_GUID(0x601)
DEFINE_GUIDSTRUCT("DFF21FE1-F70F-11D0-B917-00A0C9223196", KSNODETYPE_ANALOG_CONNECTOR);
#define KSNODETYPE_ANALOG_CONNECTOR DEFINE_GUIDNAMED(KSNODETYPE_ANALOG_CONNECTOR)

#define STATIC_KSNODETYPE_SPEAKER\
    DEFINE_USB_TERMINAL_GUID(0x0301)
DEFINE_GUIDSTRUCT("DFF21CE1-F70F-11D0-B917-00A0C9223196", KSNODETYPE_SPEAKER);
#define KSNODETYPE_SPEAKER DEFINE_GUIDNAMED(KSNODETYPE_SPEAKER)

#define STATIC_KSAUDFNAME_RECORDING_CONTROL\
    0x185FEDFAL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDFA-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_RECORDING_CONTROL);
#define KSAUDFNAME_RECORDING_CONTROL DEFINE_GUIDNAMED(KSAUDFNAME_RECORDING_CONTROL)

#define STATIC_KSNODETYPE_VOLUME\
    0x3A5ACC00L, 0xC557, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("3A5ACC00-C557-11D0-8A2B-00A0C9255AC1", KSNODETYPE_VOLUME);
#define KSNODETYPE_VOLUME DEFINE_GUIDNAMED(KSNODETYPE_VOLUME)

#define STATIC_KSAUDFNAME_WAVE_VOLUME\
    0x185FEDE5L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDE5-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_WAVE_VOLUME);
#define KSAUDFNAME_WAVE_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_WAVE_VOLUME)

#define STATIC_KSNODETYPE_MUTE\
    0x02B223C0L, 0xC557, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("02B223C0-C557-11D0-8A2B-00A0C9255AC1", KSNODETYPE_MUTE);
#define KSNODETYPE_MUTE DEFINE_GUIDNAMED(KSNODETYPE_MUTE)

#define STATIC_KSAUDFNAME_WAVE_MUTE\
    0x185FEDE6L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDE6-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_WAVE_MUTE);
#define KSAUDFNAME_WAVE_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_WAVE_MUTE)

#define STATIC_KSAUDFNAME_MIC_VOLUME\
    0x185FEDEDL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDED-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_MIC_VOLUME);
#define KSAUDFNAME_MIC_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_MIC_VOLUME)

#define STATIC_KSNODETYPE_SUM\
    0xDA441A60L, 0xC556, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("DA441A60-C556-11D0-8A2B-00A0C9255AC1", KSNODETYPE_SUM);
#define KSNODETYPE_SUM DEFINE_GUIDNAMED(KSNODETYPE_SUM)

#define STATIC_KSAUDFNAME_MASTER_VOLUME\
    0x185FEDE3L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDE3-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_MASTER_VOLUME);
#define KSAUDFNAME_MASTER_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_MASTER_VOLUME)

#define STATIC_KSAUDFNAME_CD_VOLUME\
    0x185FEDE9L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDE9-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_CD_VOLUME);
#define KSAUDFNAME_CD_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_CD_VOLUME)

#define STATIC_KSAUDFNAME_RECORDING_SOURCE\
    0x185FEDEFL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDEF-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_RECORDING_SOURCE);
#define KSAUDFNAME_RECORDING_SOURCE DEFINE_GUIDNAMED(KSAUDFNAME_RECORDING_SOURCE)

#define STATIC_KSAUDFNAME_LINE_IN_VOLUME\
    0x185FEDF4L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDF4-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_LINE_IN_VOLUME);
#define KSAUDFNAME_LINE_IN_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_LINE_IN_VOLUME)

#define STATIC_KSAUDFNAME_AUX_VOLUME\
    0x185FEDFCL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDFC-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_AUX_VOLUME);
#define KSAUDFNAME_AUX_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_AUX_VOLUME)

#define STATIC_KSAUDFNAME_MIC_IN_VOLUME\
    0x185FEDF5L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDF5-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_MIC_IN_VOLUME);
#define KSAUDFNAME_MIC_IN_VOLUME DEFINE_GUIDNAMED(KSAUDFNAME_MIC_IN_VOLUME)

#define STATIC_KSNODETYPE_LOUDNESS\
    0x41887440L, 0xC558, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("41887440-C558-11D0-8A2B-00A0C9255AC1", KSNODETYPE_LOUDNESS);
#define KSNODETYPE_LOUDNESS DEFINE_GUIDNAMED(KSNODETYPE_LOUDNESS)

#define STATIC_KSAUDFNAME_MICROPHONE_BOOST\
    0x2bc31d6aL, 0x96e3, 0x11d2, 0xac, 0x4c, 0x0, 0xc0, 0x4f, 0x8e, 0xfb, 0x68
DEFINE_GUIDSTRUCT("2BC31D6A-96E3-11d2-AC4C-00C04F8EFB68", KSAUDFNAME_MICROPHONE_BOOST);
#define KSAUDFNAME_MICROPHONE_BOOST DEFINE_GUIDNAMED(KSAUDFNAME_MICROPHONE_BOOST)

#define STATIC_KSAUDFNAME_CD_MUTE\
    0x185FEDEAL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDEA-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_CD_MUTE);
#define KSAUDFNAME_CD_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_CD_MUTE)

#define STATIC_KSAUDFNAME_LINE_MUTE\
    0x185FEDECL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDEC-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_LINE_MUTE);
#define KSAUDFNAME_LINE_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_LINE_MUTE)

#define STATIC_KSAUDFNAME_MIC_MUTE\
    0x185FEDEEL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDEE-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_MIC_MUTE);
#define KSAUDFNAME_MIC_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_MIC_MUTE)

#define STATIC_KSAUDFNAME_AUX_MUTE\
    0x185FEDFDL, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDFD-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_AUX_MUTE);
#define KSAUDFNAME_AUX_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_AUX_MUTE)

#define STATIC_KSAUDFNAME_VOLUME_CONTROL\
    0x185FEDF7L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDF7-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_VOLUME_CONTROL);
#define KSAUDFNAME_VOLUME_CONTROL DEFINE_GUIDNAMED(KSAUDFNAME_VOLUME_CONTROL)

#define STATIC_KSNODETYPE_MUX\
    0x2CEAF780L, 0xC556, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("2CEAF780-C556-11D0-8A2B-00A0C9255AC1", KSNODETYPE_MUX);
#define KSNODETYPE_MUX DEFINE_GUIDNAMED(KSNODETYPE_MUX)

#define STATIC_KSAUDFNAME_MASTER_MUTE\
    0x185FEDE4L, 0x9905, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3
DEFINE_GUIDSTRUCT("185FEDE4-9905-11D1-95A9-00C04FB925D3", KSAUDFNAME_MASTER_MUTE);
#define KSAUDFNAME_MASTER_MUTE DEFINE_GUIDNAMED(KSAUDFNAME_MASTER_MUTE)

#define STATIC_KSNODETYPE_PEAKMETER\
    0xa085651eL, 0x5f0d, 0x4b36, 0xa8, 0x69, 0xd1, 0x95, 0xd6, 0xab, 0x4b, 0x9e
DEFINE_GUIDSTRUCT("A085651E-5F0D-4b36-A869-D195D6AB4B9E", KSNODETYPE_PEAKMETER);
#define KSNODETYPE_PEAKMETER DEFINE_GUIDNAMED(KSNODETYPE_PEAKMETER)

#define STATIC_KSNODETYPE_STEREO_WIDE\
    0xA9E69800L, 0xC558, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("A9E69800-C558-11D0-8A2B-00A0C9255AC1", KSNODETYPE_STEREO_WIDE);
#define KSNODETYPE_STEREO_WIDE DEFINE_GUIDNAMED(KSNODETYPE_STEREO_WIDE)

#define STATIC_KSNODETYPE_TONE\
    0x7607E580L, 0xC557, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1
DEFINE_GUIDSTRUCT("7607E580-C557-11D0-8A2B-00A0C9255AC1", KSNODETYPE_TONE);
#define KSNODETYPE_TONE DEFINE_GUIDNAMED(KSNODETYPE_TONE)

/*
    Pins
*/

#define STATIC_KSCATEGORY_WDMAUD_USE_PIN_NAME \
    0x47A4FA20L, 0xA251, 0x11D1, {0xA0, 0x50, 0x00, 0x00, 0xF8, 0x00, 0x47, 0x88}
DEFINE_GUIDSTRUCT("47A4FA20-A251-11D1-A050-0000F8004788", KSCATEGORY_WDMAUD_USE_PIN_NAME);
#define KSCATEGORY_WDMAUD_USE_PIN_NAME DEFINE_GUIDNAMED(KSCATEGORY_WDMAUD_USE_PIN_NAME)


/*
    Formats
*/

//#if defined(_INC_MMREG)
#if !defined( PACK_PRAGMAS_NOT_SUPPORTED )
#include <pshpack1.h>
#endif
typedef struct {
    KSDATAFORMAT    DataFormat;
    WAVEFORMATEX    WaveFormatEx;
} KSDATAFORMAT_WAVEFORMATEX, *PKSDATAFORMAT_WAVEFORMATEX;

typedef struct {
    ULONG               Flags;
    ULONG               Control;
    WAVEFORMATEX        WaveFormatEx;
} KSDSOUND_BUFFERDESC, *PKSDSOUND_BUFFERDESC;

typedef struct {
    KSDATAFORMAT        DataFormat;
    KSDSOUND_BUFFERDESC BufferDesc;
} KSDATAFORMAT_DSOUND, *PKSDATAFORMAT_DSOUND;

#if !defined( PACK_PRAGMAS_NOT_SUPPORTED )
#include <poppack.h>
#endif

//#endif

typedef struct {
   KSDATARANGE              DataRange;
   ULONG                    MaximumChannels;
   ULONG                    MinimumBitsPerSample;
   ULONG                    MaximumBitsPerSample;
   ULONG                    MinimumSampleFrequency;
   ULONG                    MaximumSampleFrequency;
} KSDATARANGE_AUDIO, *PKSDATARANGE_AUDIO;

#if !defined( DEFINE_WAVEFORMATEX_GUID )
#define DEFINE_WAVEFORMATEX_GUID(x) (USHORT)(x), 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
#endif

#define STATIC_KSDATAFORMAT_SUBTYPE_WAVEFORMATEX\
    0x00000000L, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
DEFINE_GUIDSTRUCT("00000000-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_WAVEFORMATEX);
#define KSDATAFORMAT_SUBTYPE_WAVEFORMATEX DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_WAVEFORMATEX)


#define INIT_WAVEFORMATEX_GUID(Guid, x)            \
{                                                  \
    *(Guid) = KSDATAFORMAT_SUBTYPE_WAVEFORMATEX;   \
    (Guid)->Data1 = (USHORT)(x);                   \
}

// 'vids'
#define STATIC_KSDATAFORMAT_TYPE_VIDEO \
    0x73646976L, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("73646976-0000-0010-8000-00aa00389b71", KSDATAFORMAT_TYPE_VIDEO);
#define KSDATAFORMAT_TYPE_VIDEO DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_VIDEO)

// 'auds'
#define STATIC_KSDATAFORMAT_TYPE_AUDIO \
    0x73647561L, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("73647561-0000-0010-8000-00aa00389b71", KSDATAFORMAT_TYPE_AUDIO);
#define KSDATAFORMAT_TYPE_AUDIO DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_AUDIO)

#define STATIC_KSDATAFORMAT_SPECIFIER_DSOUND\
    0x518590a2L, 0xa184, 0x11d0, 0x85, 0x22, 0x00, 0xc0, 0x4f, 0xd9, 0xba, 0xf3
DEFINE_GUIDSTRUCT("518590a2-a184-11d0-8522-00c04fd9baf3", KSDATAFORMAT_SPECIFIER_DSOUND);
#define KSDATAFORMAT_SPECIFIER_DSOUND DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_DSOUND)

#define STATIC_KSDATAFORMAT_SUBTYPE_ANALOG\
    0x6dba3190L, 0x67bd, 0x11cf, 0xa0, 0xf7, 0x00, 0x20, 0xaf, 0xd1, 0x56, 0xe4
DEFINE_GUIDSTRUCT("6dba3190-67bd-11cf-a0f7-0020afd156e4", KSDATAFORMAT_SUBTYPE_ANALOG);
#define KSDATAFORMAT_SUBTYPE_ANALOG DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_ANALOG)


// 'txts'
#define STATIC_KSDATAFORMAT_TYPE_TEXT \
    0x73747874L, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("73747874-0000-0010-8000-00aa00389b71", KSDATAFORMAT_TYPE_TEXT);
#define KSDATAFORMAT_TYPE_TEXT DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_TEXT)

#define STATIC_KSDATAFORMAT_TYPE_MUSIC \
    0xE725D360L, 0x62CC, 0x11CF, {0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00}
DEFINE_GUIDSTRUCT("E725D360-62CC-11CF-A5D6-28DB04C10000", KSDATAFORMAT_TYPE_MUSIC);
#define KSDATAFORMAT_TYPE_MUSIC DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_MUSIC)

// 'mids'
#define STATIC_KSDATAFORMAT_TYPE_MIDI \
    0x7364696DL, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("7364696D-0000-0010-8000-00aa00389b71", KSDATAFORMAT_TYPE_MIDI);
#define KSDATAFORMAT_TYPE_MIDI DEFINE_GUIDNAMED(KSDATAFORMAT_TYPE_MIDI)

#define STATIC_KSDATAFORMAT_SUBTYPE_MIDI \
    0x1D262760L, 0xE957, 0x11CF, {0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00}
DEFINE_GUIDSTRUCT("1D262760-E957-11CF-A5D6-28DB04C10000", KSDATAFORMAT_SUBTYPE_MIDI);
#define KSDATAFORMAT_SUBTYPE_MIDI DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_MIDI)

#define STATIC_KSDATAFORMAT_SUBTYPE_PCM\
    0x00000001L, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("00000001-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_PCM);
#define KSDATAFORMAT_SUBTYPE_PCM DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_PCM)

#define STATIC_KSDATAFORMAT_SUBTYPE_IEEE_FLOAT\
    0x00000003L, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}
DEFINE_GUIDSTRUCT("00000003-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_IEEE_FLOAT);
#define KSDATAFORMAT_SUBTYPE_IEEE_FLOAT DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_IEEE_FLOAT)

#define STATIC_KSDATAFORMAT_SPECIFIER_WAVEFORMATEX\
    0x05589f81L, 0xc356, 0x11ce, 0xbf, 0x01, 0x00, 0xaa, 0x00, 0x55, 0x59, 0x5a
DEFINE_GUIDSTRUCT("05589f81-c356-11ce-bf01-00aa0055595a", KSDATAFORMAT_SPECIFIER_WAVEFORMATEX);
#define KSDATAFORMAT_SPECIFIER_WAVEFORMATEX DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_WAVEFORMATEX)

#define STATIC_KSDATAFORMAT_SUBTYPE_AC3_AUDIO\
    0xe06d802cL, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea
DEFINE_GUIDSTRUCT("e06d802c-db46-11cf-b4d1-00805f6cbbea", KSDATAFORMAT_SUBTYPE_AC3_AUDIO);
#define KSDATAFORMAT_SUBTYPE_AC3_AUDIO DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_AC3_AUDIO)

#define STATIC_KSDATAFORMAT_SPECIFIER_AC3_AUDIO\
    0xe06d80e4L, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea
DEFINE_GUIDSTRUCT("e06d80e4-db46-11cf-b4d1-00805f6cbbea", KSDATAFORMAT_SPECIFIER_AC3_AUDIO);
#define KSDATAFORMAT_SPECIFIER_AC3_AUDIO DEFINE_GUIDNAMED(KSDATAFORMAT_SPECIFIER_AC3_AUDIO)

#define STATIC_KSPROPSETID_AC3\
    0xBFABE720L, 0x6E1F, 0x11D0, 0xBC, 0xF2, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00
DEFINE_GUIDSTRUCT("BFABE720-6E1F-11D0-BCF2-444553540000", KSPROPSETID_AC3);
#define KSPROPSETID_AC3 DEFINE_GUIDNAMED(KSPROPSETID_AC3)

#define STATIC_KSPROPSETID_Audio\
    0x45FFAAA0L, 0x6E1B, 0x11D0, {0xBC, 0xF2, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}
DEFINE_GUIDSTRUCT("45FFAAA0-6E1B-11D0-BCF2-444553540000", KSPROPSETID_Audio);
#define KSPROPSETID_Audio DEFINE_GUIDNAMED(KSPROPSETID_Audio)

typedef enum {
    KSPROPERTY_AUDIO_LATENCY = 1,
    KSPROPERTY_AUDIO_COPY_PROTECTION,
    KSPROPERTY_AUDIO_CHANNEL_CONFIG,
    KSPROPERTY_AUDIO_VOLUMELEVEL,
    KSPROPERTY_AUDIO_POSITION,
    KSPROPERTY_AUDIO_DYNAMIC_RANGE,
    KSPROPERTY_AUDIO_QUALITY,
    KSPROPERTY_AUDIO_SAMPLING_RATE,
    KSPROPERTY_AUDIO_DYNAMIC_SAMPLING_RATE,
    KSPROPERTY_AUDIO_MIX_LEVEL_TABLE,
    KSPROPERTY_AUDIO_MIX_LEVEL_CAPS,
    KSPROPERTY_AUDIO_MUX_SOURCE,
    KSPROPERTY_AUDIO_MUTE,
    KSPROPERTY_AUDIO_BASS,
    KSPROPERTY_AUDIO_MID,
    KSPROPERTY_AUDIO_TREBLE,
    KSPROPERTY_AUDIO_BASS_BOOST,
    KSPROPERTY_AUDIO_EQ_LEVEL,
    KSPROPERTY_AUDIO_NUM_EQ_BANDS,
    KSPROPERTY_AUDIO_EQ_BANDS,
    KSPROPERTY_AUDIO_AGC,
    KSPROPERTY_AUDIO_DELAY,
    KSPROPERTY_AUDIO_LOUDNESS,
    KSPROPERTY_AUDIO_WIDE_MODE,
    KSPROPERTY_AUDIO_WIDENESS,
    KSPROPERTY_AUDIO_REVERB_LEVEL,
    KSPROPERTY_AUDIO_CHORUS_LEVEL,
    KSPROPERTY_AUDIO_DEV_SPECIFIC,
    KSPROPERTY_AUDIO_DEMUX_DEST,
    KSPROPERTY_AUDIO_STEREO_ENHANCE,
    KSPROPERTY_AUDIO_MANUFACTURE_GUID,
    KSPROPERTY_AUDIO_PRODUCT_GUID,
    KSPROPERTY_AUDIO_CPU_RESOURCES,
    KSPROPERTY_AUDIO_STEREO_SPEAKER_GEOMETRY,
    KSPROPERTY_AUDIO_SURROUND_ENCODE,
    KSPROPERTY_AUDIO_3D_INTERFACE

#if (NTDDI_VERSION >= NTDDI_WINXP)
    , KSPROPERTY_AUDIO_PEAKMETER
    , KSPROPERTY_AUDIO_ALGORITHM_INSTANCE
    , KSPROPERTY_AUDIO_FILTER_STATE
    , KSPROPERTY_AUDIO_PREFERRED_STATUS
    
#endif 
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
    , KSPROPERTY_AUDIO_PEQ_MAX_BANDS
    , KSPROPERTY_AUDIO_PEQ_NUM_BANDS
    , KSPROPERTY_AUDIO_PEQ_BAND_CENTER_FREQ
    , KSPROPERTY_AUDIO_PEQ_BAND_Q_FACTOR
    , KSPROPERTY_AUDIO_PEQ_BAND_LEVEL
    , KSPROPERTY_AUDIO_CHORUS_MODULATION_RATE
    , KSPROPERTY_AUDIO_CHORUS_MODULATION_DEPTH
    , KSPROPERTY_AUDIO_REVERB_TIME
    , KSPROPERTY_AUDIO_REVERB_DELAY_FEEDBACK
    , KSPROPERTY_AUDIO_POSITIONEX
    , KSPROPERTY_AUDIO_MIC_ARRAY_GEOMETRY
#endif

} KSPROPERTY_AUDIO;


/*
    SysAudio Properties
*/

#define STATIC_KSPROPSETID_Sysaudio \
    0xCBE3FAA0L, 0xCC75, 0x11D0, {0xB4, 0x65, 0x00, 0x00, 0x1A, 0x18, 0x18, 0xE6}
DEFINE_GUIDSTRUCT("CBE3FAA0-CC75-11D0-B465-00001A1818E6", KSPROPSETID_Sysaudio);
#define KSPROPSETID_Sysaudio DEFINE_GUIDNAMED(KSPROPSETID_Sysaudio)

typedef enum {
    KSPROPERTY_SYSAUDIO_DEVICE_COUNT            = 1,
    KSPROPERTY_SYSAUDIO_DEVICE_FRIENDLY_NAME    = 2,
    KSPROPERTY_SYSAUDIO_DEVICE_INSTANCE         = 3,
    KSPROPERTY_SYSAUDIO_DEVICE_INTERFACE_NAME   = 4,
    KSPROPERTY_SYSAUDIO_SELECT_GRAPH            = 5,
    KSPROPERTY_SYSAUDIO_CREATE_VIRTUAL_SOURCE   = 6,
    KSPROPERTY_SYSAUDIO_DEVICE_DEFAULT          = 7,
    KSPROPERTY_SYSAUDIO_INSTANCE_INFO           = 14,
    KSPROPERTY_SYSAUDIO_COMPONENT_ID            = 16
} KSPROPERTY_SYSAUDIO;

typedef struct {
    KSPROPERTY Property;
    ULONG Flags;
    ULONG DeviceNumber;
} SYSAUDIO_INSTANCE_INFO, *PSYSAUDIO_INSTANCE_INFO;

#define SYSAUDIO_FLAGS_DONT_COMBINE_PINS        0x00000001


#define STATIC_KSPROPSETID_Sysaudio_Pin \
    0xA3A53220L, 0xC6E4, 0x11D0, {0xB4, 0x65, 0x00, 0x00, 0x1A, 0x18, 0x18, 0xE6}
DEFINE_GUIDSTRUCT("A3A53220-C6E4-11D0-B465-00001A1818E6", KSPROPSETID_Sysaudio_Pin);
#define KSPROPSETID_Sysaudio_Pin DEFINE_GUIDNAMED(KSPROPSETID_Sysaudio_Pin)

typedef enum {
    KSPROPERTY_SYSAUDIO_ATTACH_VIRTUAL_SOURCE = 1,
} KSPROPERTY_SYSAUDIO_PIN;


#define KSAUDIO_CPU_RESOURCES_NOT_HOST_CPU  0x00000000
#define KSAUDIO_CPU_RESOURCES_HOST_CPU      0x7FFFFFFF

#if (NTDDI_VERSION >= NTDDI_WINXP)
#define KSAUDIO_SPEAKER_DIRECTOUT       0
#endif
#define KSAUDIO_SPEAKER_MONO            (SPEAKER_FRONT_CENTER)
#define KSAUDIO_SPEAKER_STEREO          (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT)
#define KSAUDIO_SPEAKER_QUAD            (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_BACK_LEFT  | SPEAKER_BACK_RIGHT)
#define KSAUDIO_SPEAKER_SURROUND        (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_FRONT_CENTER | SPEAKER_BACK_CENTER)
#define KSAUDIO_SPEAKER_5POINT1         (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | \
                                         SPEAKER_BACK_LEFT  | SPEAKER_BACK_RIGHT)
#define KSAUDIO_SPEAKER_7POINT1         (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | \
                                         SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT | \
                                         SPEAKER_FRONT_LEFT_OF_CENTER | SPEAKER_FRONT_RIGHT_OF_CENTER)

#if ( (NTDDI_VERSION >= NTDDI_WINXPSP2) && (NTDDI_VERSION < NTDDI_WS03) ) || (NTDDI_VERSION >= NTDDI_WS03SP1)

#define KSAUDIO_SPEAKER_5POINT1_SURROUND (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | \
                                         SPEAKER_SIDE_LEFT  | SPEAKER_SIDE_RIGHT)
#define KSAUDIO_SPEAKER_7POINT1_SURROUND (SPEAKER_FRONT_LEFT | SPEAKER_FRONT_RIGHT | \
                                         SPEAKER_FRONT_CENTER | SPEAKER_LOW_FREQUENCY | \
                                         SPEAKER_BACK_LEFT | SPEAKER_BACK_RIGHT | \
                                         SPEAKER_SIDE_LEFT | SPEAKER_SIDE_RIGHT)
#define KSAUDIO_SPEAKER_5POINT1_BACK     KSAUDIO_SPEAKER_5POINT1
#define KSAUDIO_SPEAKER_7POINT1_WIDE     KSAUDIO_SPEAKER_7POINT1
#endif 

typedef struct
{
    KSPROPERTY  Property;
    ULONG  NodeId;
    ULONG  Reserved;
} KSNODEPROPERTY, *PKSNODEPROPERTY;

typedef struct
{
    KSNODEPROPERTY  NodeProperty;
    LONG  Channel;
    ULONG  Reserved;
} KSNODEPROPERTY_AUDIO_CHANNEL, *PKSNODEPROPERTY_AUDIO_CHANNEL;

typedef struct {
#if defined(_NTDDK_)
    ULONGLONG        PlayOffset;
    ULONGLONG        WriteOffset;
#else
    DWORDLONG        PlayOffset;
    DWORDLONG        WriteOffset;
#endif
} KSAUDIO_POSITION, *PKSAUDIO_POSITION;

typedef struct {
    ULONG   FifoSize;
    ULONG   ChipsetDelay;
    ULONG   CodecDelay;
} KSRTAUDIO_HWLATENCY, *PKSRTAUDIO_HWLATENCY;

typedef struct {
    PVOID       Register;
    ULONG       Width;
    ULONGLONG   Numerator;
    ULONGLONG   Denominator;
    ULONG       Accuracy;
} KSRTAUDIO_HWREGISTER, *PKSRTAUDIO_HWREGISTER;

#endif

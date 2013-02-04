#ifndef __MTK_WDT_H__
#define __MTK_WDT_H__

#define ENABLE_WDT_MODULE		(1) // Module switch

#define MTK_WDT_BASE			TOP_RGU_BASE

#define MTK_WDT_MODE			(MTK_WDT_BASE+0x0000)
#define MTK_WDT_LENGTH			(MTK_WDT_BASE+0x0004)
#define MTK_WDT_RESTART			(MTK_WDT_BASE+0x0008)
#define MTK_WDT_STATUS			(MTK_WDT_BASE+0x000C)
#define MTK_WDT_INTERVAL		(MTK_WDT_BASE+0x0010)
#define MTK_WDT_SWRST			(MTK_WDT_BASE+0x0014)
#define MTK_WDT_SWSYSRST		(MTK_WDT_BASE+0x0018)

/*WDT_MODE*/
#define MTK_WDT_MODE_KEYMASK		(0xff00)
#define MTK_WDT_MODE_KEY		(0x2200)
#define MTK_WDT_MODE_DEBUG_EN		(0x0040)
#define MTK_WDT_MODE_IN_DIS		(0x0020) /* Reserved */
#define MTK_WDT_MODE_AUTO_RESTART	(0x0010) /* Reserved */
#define MTK_WDT_MODE_IRQ		(0x0008)
#define MTK_WDT_MODE_EXTEN		(0x0004)
#define MTK_WDT_MODE_EXT_POL		(0x0002)
#define MTK_WDT_MODE_ENABLE		(0x0001)


/*WDT_LENGTH*/
#define MTK_WDT_LENGTH_TIME_OUT		(0xffe0)
#define MTK_WDT_LENGTH_KEYMASK		(0x001f)
#define MTK_WDT_LENGTH_KEY		(0x0008)

/*WDT_RESTART*/
#define MTK_WDT_RESTART_KEY		(0x1971)

/*WDT_STATUS*/
#define MTK_WDT_STATUS_HWWDT_RST	(0x8000)
#define MTK_WDT_STATUS_SWWDT_RST	(0x4000)

/*WDT_INTERVAL*/
#define MTK_WDT_INTERVAL_MASK		(0x0fff)

/*WDT_SWRST*/
#define MTK_WDT_SWRST_KEY		(0x1209)

/*WDT_SWSYSRST*/
#define MTK_WDT_SWSYS_RST_MD_RST	(0x0004)
#define MTK_WDT_SWSYS_RST_MM2_RST	(0x0002)
#define MTK_WDT_SWSYS_RST_MM1_RST	(0x0001)
#define MTK_WDT_SWSYS_RST_KEY		(0x1500)

#define WDT_NORMAL_REBOOT		(0x01)
#define WDT_BY_PASS_PWK_REBOOT		(0x02)
#define WDT_NOT_WDT_REBOOT		(0x00)

extern void mtk_wdt_init(void);
//extern void mtk_wdt_reset(void);
//extern unsigned int mtk_wdt_check_status(void);
extern BOOL mtk_is_rgu_trigger_reset(void);
extern void mtk_arch_reset(char mode);

#endif   /*__MTK_WDT_H__*/
